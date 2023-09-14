console.log($)
console.log(jQuery)

// jQuery("button").click(function(){
//     console.log("Button Clicked!")
// })

// $("button").click(function(){
//     console.log("Button Clicked!")
// })

// $.noConflict();
// jQuery(document).ready(function($){
//     $("button").click(function(){
//         console.log("Button CLicked")
//     })
// })

// $(function(){
//     $("p").hover(function(){
//         console.log("Paragraph Hovered!")
//     })
//     $("#btn1").click(function(){
//         console.log("Button with Id Clicked!")
//     })
//     $(".class1").dblclick(function(){
//         console.log("Button with Class Double Clicked!")
//     })
// })

$.noConflict()
jQuery(document).ready(function($){
    // Mouse Events
        $("p").hover(function(){
            console.log("Paragraph Hovered!")
        })
        $("#btn1").click(function(){
            console.log("Button with Id Clicked!")
        })
        $(".class1").dblclick(function(){
            console.log("Button with Class Double Clicked!")
        })
    // Keyboard Events
        $("#txt1").keypress(function(){
            console.log("Key Press")
        })
        $("#txt1").keydown(function(){
            console.log("Key Down")
        })
        $("#txt1").keyup(function(){
            console.log("Key Up")
        })
    // Form Events
        $("#fname").focus(function(){
            console.log("FOCUS")
        })
        $("#fname").blur(function(){
            console.log("blur")
        })
        $("#form1").submit(function(e){
            console.log("Submitted!")
            e.preventDefault()
        })
    // Window Event
        $(window).resize(function(){
            console.log("Window Resized!")
        })

    // Hide and Show
        $("#p3").hide()
        $("#p2").click(function(){
            $("#p2").hide()
            $("#p3").show()
        })
        $("#p3").click(function(){
            $("#p3").hide()
            $("#p2").show(2000)
        })

    // Animate
        $("#bullet").hide()
        $("#pop").hide()
        $("#gun").click(function(){
            $("#bullet").css("left", "0")
            $("#pop").show()
            $("#pop").hide(20)
            $("#bullet").show(function(){
                $("#bullet").animate({left: "+1300"}, 500, function(){
                    $("#bullet").hide()
                })
            })
        })

    // Get Text
        let data = $("#p3").text()
        console.log(data)

    // Set Data
        $("#p3").text("Show Secret :)")

    // Get HTML
        let html_data = $("#p2").html()
        console.log(html_data)

    // Set HTML
        $("#html-id").click(function(){
            let htmldata = "<b>Show Secret :)</b>"
            $("#p3").html(htmldata)
        })
    

    // Get Value
        let value = $("#nameV").val()
        console.log(value)

    // Set Value
        $("#val-id").click(function(){
            let inputVal = "Value is set!"
            $("#nameV").val(inputVal)
        })
    })