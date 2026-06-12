def shared
  platform :ios, '16.0'
  pod 'Seafile', :path => "./"
  pod 'AFNetworking', '~> 4.0.0'
  pod 'OpenSSL-Universal', '~> 3.3'
  pod 'APLRUCache', '~> 1.0.0'
  pod 'UniversalDetector'
end

target :"seafileApp" do
  pod 'SVPullToRefresh', :git => 'https://github.com/lilthree/SVPullToRefresh.git', :branch => 'master'
  pod 'SVProgressHUD', :git => 'https://github.com/SVProgressHUD/SVProgressHUD', :tag =>'1.1.3'
  pod 'SWTableViewCell', :git => 'https://github.com/haiwen/SWTableViewCell.git', :branch => 'master'
  pod 'MWPhotoBrowser', :git => 'https://github.com/haiwen/MWPhotoBrowser.git', :branch => 'master'
  # Pinned to a specific commit so locally-applied theming/localization
  # changes are not lost on `pod install`. Bump the SHA when picking up
  # new upstream commits from haiwen/QBImagePickerController.
  pod 'QBImagePickerController', :git => 'https://github.com/haiwen/QBImagePickerController.git', :commit => '31b537e1a27027307886b7fc6a42253e6b1b711a'
  pod 'WechatOpenSDK-XCFramework', '~> 2.0'
  shared
end


target :"SeafFileProvider" do
  shared
end

target :"SeafFileProviderUI" do
  shared
end

target :"SeafAction" do
  pod 'SVPullToRefresh', :git => 'https://github.com/lilthree/SVPullToRefresh.git', :branch => 'master'
  shared
end

target :"SeafShare" do
    pod 'SVPullToRefresh', :git => 'https://github.com/lilthree/SVPullToRefresh.git', :branch => 'master'
    shared
end

# https://github.com/CocoaPods/CocoaPods/issues/8069
# https://github.com/CocoaPods/CocoaPods/issues/11402
post_install do |installer|
  # AFNetworking 4.x imports <netinet6/in6.h>, which the iOS 26 SDK treats as a
  # private modular header (hard error). The import is redundant: <netinet/in.h>
  # already pulls in everything AFNetworkReachabilityManager needs.
  Dir.glob(File.join(installer.sandbox.root, 'AFNetworking/**/*.{h,m}')).each do |file|
    src = File.read(file)
    patched = src.gsub(%r{^#import <netinet6/in6\.h>\n}, '')
    if patched != src
      File.chmod(0644, file)
      File.write(file, patched)
    end
  end

  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      if config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'].to_f < 16.0
          config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '16.0'
      end
    end
    if target.respond_to?(:product_type) and target.product_type == "com.apple.product-type.bundle"
      target.build_configurations.each do |config|
          config.build_settings['CODE_SIGNING_ALLOWED'] = 'NO'
      end
    end
  end
end
