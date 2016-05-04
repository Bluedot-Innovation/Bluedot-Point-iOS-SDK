Pod::Spec.new do |s|
  s.name = "Bluedot-Point-iOS-SDK"
  s.version = "1.7"
  s.summary = ""
  s.homepage = "http://www.bluedotinnovation.com"
  s.license = ""
  s.author = { "Bluedot Innovation" => "http://www.bluedotinnovation.com" }
  s.source = { :git => 'https://github.com/Bluedot-Innovation/Bluedot-Point-iOS-SDK.git', :tag => s.version }
  s.platform = :ios
  s.ios.deployment_target = '6.0'
  s.requires_arc = true
  s.documentation_url = 'http://docs.bluedotinnovation.com'
  s.library = 'z'
  s.frameworks = 'AudioToolbox', 'AVFoundation', 'CoreGraphics', 'CoreLocation', 'CoreMotion', 'Foundation', 'MapKit', 'QuartzCore', 'SystemConfiguration', 'UIKit'
  s.weak_framework = 'AppKit', 'CoreData', 'Foundation'
  s.source_files = 'BDPointSDK/includes/*.h'
  s.exclude_files = 'BDPointSDK/**/*.txt'
  s.preserve_paths = 'BDPointSDK/**/*.*'
  s.vendored_libraries = 'BDPointSDK/libBDPointSDK-iphoneos.a', 'BDPointSDK/libBDPointSDK-iphonesimulator.a'
end