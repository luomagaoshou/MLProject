//
//  MLSwift.swift
//  MLProject
//
//  Created by apple on 16/5/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import Foundation
import UIKit
typealias sendClosure = (str:String) -> String
class MLSwift: NSObject {
    
     var closureMethod:((str:String) -> String)?
    
   static func instanceTest(str:String)->String
    {
        return str + str
    }
    class func classTest(str:String)->String
    {
        return str + str + str
    }
    class func swiftDic(strs:String...)->Dictionary<String, String>
    {
    
        
        var dic = ["haha":"gaga", "papa":"lala"]
        
        dic[strs[0]] = strs[1]
        dic.updateValue(strs[0], forKey: strs[1])
    
        
        return dic;
        
    }
    
    func someFunctionThatTakesAClosure(closure: () -> ()) {
        // 函数体部分
    }
  
    static let numberFormatter: NSNumberFormatter = {
        let formatter = NSNumberFormatter()
        formatter.numberStyle = .DecimalStyle
        return formatter
    }()

    var closureTest2:String = {
        return "fuck"
    }()
    
    func Say(num:Int) -> Bool {
        return num > 10
    }
  
    
    
    
    func setClosureMothod(firstString:String, closureImp:(str:String) -> String) {
        self.closureMethod = closureImp
        
    }
}

