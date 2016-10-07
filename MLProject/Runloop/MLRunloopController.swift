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
        
        DispatchQueue.global(priority: DispatchQueue.GlobalQueuePriority.default).async { 
            while true {
                let macPort = Port()
                print("while begin")
                let runloop = RunLoop.current
                runloop.add(macPort, forMode: RunLoopMode.defaultRunLoopMode)
                runloop.run(mode: RunLoopMode.defaultRunLoopMode, before: Date.distantFuture)
                
                print("while end")
                
            }
        }
      
    }
    func tryPerformSelectorOnMianThread() -> Void {
        self.perform(#selector(self.mainThreadMethod))
        
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
