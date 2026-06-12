Pod::Spec.new do |s|
  s.name             = "Seafile"
  s.version          = "4.0.2"
  s.summary          = "iOS client for seafile."
  s.homepage         = "https://github.com/haiwen/seafile-iOS"
  s.license          = 'MIT'
  s.author           = { "wei.wang" => "poetwang@gmail.com" }
  s.source           = { :git => "https://github.com/haiwen/seafile-iOS.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/Seafile'
  s.source_files     = 'Pod/Classes/**/*.{h,m}'
  s.resource_bundles = { 'Seafile' => 'Pod/Resources/*' }
  s.platform         = :ios, '16.0'
  s.requires_arc     = true
  s.frameworks       = 'Photos'
  s.dependency 'AFNetworking', '~> 4.0.0'
  s.dependency 'OpenSSL-Universal', '~> 3.3'
  s.dependency 'Realm', '~> 10.45.0'
end
