//
//  MLAudioController.swift
//  MLProject
//
//  Created by 妙龙赖 on 16/5/28.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import UIKit
import AVFoundation
class MLAudioController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
  

}
extension MLAudioController
{
    
    func audioRecord() -> AVAudioRecorder {
        let audioRecord:AVAudioRecorder? = try? AVAudioRecorder(URL: NSURL(string: "")!, settings:self.recordSetting())
//        do{
//                try  audioRecord = AVAudioRecorder(URL: NSURL(string: "")!, settings:self.recordSetting())
//            audioRecord?.prepareToRecord()
//            return audioRecord!
//        }catch{
//      return audioRecord
//        }
        return audioRecord!
        
   
       
        
    }
    func recordSetting() -> Dictionary<String, AnyObject> {
        var dic:Dictionary<String, AnyObject> = [AVFormatIDKey:NSNumber(unsignedInt:kAudioFormatLinearPCM)]
        dic[AVSampleRateKey] = NSNumber(integer: 8000)
        dic[AVNumberOfChannelsKey] = NSNumber(integer: 2)
        
        
        return dic
        
        
    }
    
}
