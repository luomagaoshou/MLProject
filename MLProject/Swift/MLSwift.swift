//
//  MLSwift.swift
//  MLProject
//
//  Created by apple on 16/5/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import Foundation
import UIKit
enum MLSwiftEnum : Int{
    case first = 1
    case second
    case third
}
enum MLSwiftMixEnum {
    case firstParam(Int, Int)
    case secondParam(String, String)
}
enum ErrorMLTestType:Error {
    case notEnoughLong
    case tooLong
}
typealias sendClosure = (_ str:String) -> String
class class1: NSObject {
    func fuck() -> Void {
        print("fuck")
    }
}


class MLSwift: NSObject {
    
     var closureMethod:((_ str:String) -> String)?
    var closureMothod2:((_ str:String)->sendClosure)?
    
    
    
   static func instanceTest(_ str:String)->String
    {
        return str + str
    }
    class func classTest(_ str:String)->String
    {
        return str + str + str
    }
    class func swiftDic(_ strs:String...)->Dictionary<String, String>
    {
    
        
        var dic = ["haha":"gaga", "papa":"lala"]
        
        dic[strs[0]] = strs[1]
        dic.updateValue(strs[0], forKey: strs[1])
    
        
        return dic;
        
    }
    
    func someFunctionThatTakesAClosure(_ closure: () -> ()) {
        // 函数体部分
    }

    static let numberFormatter: NumberFormatter = {
        let formatter = NumberFormatter()
        formatter.numberStyle = .decimal
        return formatter
    }()

    var closureTest2:String = {
        return "fuck"
    }()
    
    func Say(_ num:Int) -> Bool {
        return num > 10
    }
  
    
    
    
    func setClosureMothod(_ firstString:String, closureImp:@escaping (_ str:String) -> String) {
        self.closureMethod = closureImp
        
    }
    
   class func valueTest(_ num:NSNumber = false) -> Bool {
        if Bool(num) {
            return true
        }else
        {
            return false
        }
    }
    class func enumTest(_ enumValue:MLSwiftEnum = MLSwiftEnum.second)->MLSwiftEnum{
        
        return enumValue;
    }
    class func guardTest(_ string:String) throws-> String? {
        let resultString = string + string
        guard resultString.characters.count > 5 else{
            throw ErrorMLTestType.notEnoughLong
        }
        guard resultString.characters.count < 15 else{
            throw ErrorMLTestType.tooLong
        }
        
        return resultString
        
    }
//    func arrayTest(obj1:AnyObject) -> Array {
//        
//    }
}
