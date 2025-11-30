function B(a) {
  let x = new webkitSpeechRecognition();
  x.lang = 'zh-CN'; 
  x.interimResult = false; 

  x.start();

  x.onresult = function(ccy) {
    let xu= ccy.results[0][0].transcript; 
    document.getElementById(a).value = xu;
  };
}
