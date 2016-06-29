//
//  MLMediaController.swift
//  MLProject
//
//  Created by 妙龙赖 on 16/5/25.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import UIKit
import MediaPlayer

class MLMediaController: UIViewController{
    @IBOutlet weak var playButton: UIButton!

    override func viewDidLoad() {
        super.viewDidLoad()

   
        // Do any additional setup after loading the view.
        // self.trueVideoUrl("http://v.youku.com/v_show/id_XMTU4Mjc0NTE2OA==.html?from=y1.3-idx-beta-1519-23042.223465.1-1")
       // print(trueVideoUrl)
//        
        
        var urlString = "http://pl.youku.com/playlist/m3u8?ts=1464168617&keyframe=1&vid=XMTU4Mjc0NTE2OA==&type=mp4&sid=746416861717720d54ef6&token=6228&oip=1863149095&ly=yunyouflvku&&did=9d6fc3b4a02437efd1b4640f92767e80&ctype=20&ev=1&ep=98PqWmSFM0SDgcBPzbnGcIGIPrC9H8n1SjZSk4S9rMQfvb1ewhPnVt9gY0ho5S90"
        urlString = "http://flv2.bn.netease.com/videolib3/1605/26/TmbyK5110/SD/TmbyK5110-mobile.mp4"
        //self.playMediaOnWebViewWithUrlString(urlString);
        //self.playMediaOnMPMoviePlayerViewControllerWithUrlString(urlString)
    //self.playMediaOnMPMoviePlayerControllerWithUrlString(urlString)
    self.playMediaOnAVPlayerLayer(urlString)
    }
 

    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    func trueVideoUrl(webUrlString:String) -> Void {
        var httpUrl = "http://apis.baidu.com/dmxy/truevideourl/truevideourl"
        var httpArg = "url=" + webUrlString
        self.requestFortrueVideoUrl(httpUrl, httpArg: httpArg)
        
    }
    func requestFortrueVideoUrl(httpUrl:String, httpArg:String) -> Void {
        var request = NSMutableURLRequest(URL: NSURL(string: httpUrl + "?" + httpArg)!)
        request.timeoutInterval = 6
        request.HTTPMethod = "GET"
        request.addValue("f99d5ff8921d80c3c2f655a8f8a2c347", forHTTPHeaderField: "apikey")
        

        
        NSURLConnection.sendAsynchronousRequest(request, queue: NSOperationQueue.mainQueue()) { (response, data, error) in
            let result = response as! NSHTTPURLResponse
            print(result.statusCode)
            if let e = error{
                print("请求失败")
            }
            if let d = data{
                var content = NSString(data: d, encoding: NSUTF8StringEncoding)
                print(content)
             
                

            }
           
        }
        
      //  {"status":"1","msg":"ok","mp4":"http://k.youku.com/player/getFlvPath/sid/046417711414120c57b80_00/st/mp4/fileid/030020010057455755E9BB2BEEFCF9247B35ED-D052-C9CD-6B45-600901C00FAB?k=4672d75bba9ab71a282b7121&hd=1&myp=0&ts=2620&ymovie=1&r=s0KfeG/MpJGxT8zBRdWN/IHAQeg1csU4bRevfhnqJ6/wjRw9FaELW83JQqzcI/iGMrcGyGS3CH6n8B8xNkQ0tybgxy/iCjKzi/f0HGjObI8DNJ5dwHu/SOIB7qgqW4+f&type=&sid=046417711414120c57b80&token=1889&oip=1863149095&did=9d6fc3b4a02437efd1b4640f92767e80&ctype=20&ev=1&ep=Ysz%2FYW0YtVYy3P2QLb8ImMnQYoeGBf9JHU1Dr%2Fj2QjEo3bEpZWCbQsBEzpnL6v6rFaHFCmcvpdeoovTtrXe3bmztJmBd%2FXgqLmJHib%2BbdNqq1i9%2BehqNWEcBJGsGMoQ8","m3u8":"http://pl.youku.com/playlist/m3u8?ts=1464177114&keyframe=1&vid=XMTU4Mjc0NTE2OA==&type=mp4&sid=046417711414120c57b80&token=1889&oip=1863149095&ly=yunyouflvku&&did=9d6fc3b4a02437efd1b4640f92767e80&ctype=20&ev=1&ep=Ysz%2FYW0YtVYy3P2QLb8ImAr8DX9FOgym6KwqFy3MJigL4dCNPhIb6juJPwi9ohmD"}
       
        
   
    }
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */
    
    func playMediaOnWebViewWithUrlString(urlString:String) -> Void {
        
        var webView:UIWebView = UIWebView.init(frame: self.view.bounds) as! UIWebView
        webView.delegate = self
        self.view.addSubview(webView)
        var urlRequest = NSURLRequest.init(URL: NSURL(string: urlString)!)
    
        webView.loadRequest(urlRequest)
        
    }

    func playMediaOnMPMoviePlayerViewControllerWithUrlString(urlString:String) -> Void {
        let playerViewController = MPMoviePlayerViewController(contentURL: NSURL(string: urlString))

        self.presentMoviePlayerViewControllerAnimated(playerViewController)

        
    }
    func playMediaOnMPMoviePlayerControllerWithUrlString(urlString:String) -> Void {
        
              let playerController = MPMoviePlayerController()
        playerController.contentURL = NSURL(string: urlString)

        playerController.view.backgroundColor = UIColor.orangeColor()
        
        playerController.view.frame = CGRectMake(0, 64, 414, 400)
        
        self.view.addSubview(playerController.view)
     self.playButton.touchUpInside { 
        playerController.play()
        }
    
        
    }
    func playMediaOnAVPlayerLayer(urlString:String) -> Void {
      
        let playerItem = AVPlayerItem(URL: NSURL(string: urlString)!)
          let player = AVPlayer.init(playerItem: playerItem)
        let layer = AVPlayerLayer.init(player: player)
        layer.frame = self.view.bounds
        self.view.layer.addSublayer(layer)
        
        #if false
        let asset = AVURLAsset.init(URL: NSURL(string: urlString)!)
        let playerItem = AVPlayerItem.init(asset: asset)
            #endif
        
        
        self.playButton.touchUpInside { 
        player.play()
        }
        
    }
}

extension MLMediaController:UIWebViewDelegate{
    func  webViewDidStartLoad(webView: UIWebView) {
        
    }
    func webViewDidFinishLoad(webView: UIWebView) {
        
    }
}
