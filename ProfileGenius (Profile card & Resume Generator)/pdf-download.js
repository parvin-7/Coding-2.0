$(document).ready(function() {
    var specialElementHandlers = {
      "#editor": function(element, renderer) {
        return true;
      }
    };
  
    $("#downloadPc").click(function() {
      var doc = jsPDF(); // Create a new instance of jsPDF
  
      doc.fromHTML($("#bodyy").html(), 15, 15, {
        'width': 200,
        'elementHandlers': specialElementHandlers
      });
  
      doc.save("profile-card.pdf");
    });
  });
  