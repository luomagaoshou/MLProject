//
//  MLRunloopController.swift
//  MLProject
//
//  Created by 妙龙赖 on 16/6/14.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import UIKit

class MLRunloopController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)) { 
            while true {
                let macPort = NSPort()
                print("while begin")
                let runloop = NSRunLoop.currentRunLoop()
                runloop.addPort(macPort, forMode: NSDefaultRunLoopMode)
                runloop.runMode(NSDefaultRunLoopMode, beforeDate: NSDate.distantFuture())
                
                print("while end")
                
            }
        }
      
    }
    func tryPerformSelectorOnMianThread() -> Void {
        self.performSelector(#selector(self.mainThreadMethod))
        
    }
    func mainThreadMethod() -> Void {
        print("mainThreadMethod")
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
