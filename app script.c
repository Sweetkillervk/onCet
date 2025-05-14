let sheet = SpreadsheetApp.openByUrl('https://docs.google.com/spreadsheets/d/1JL7j9YEVqoqBBkfI4Yz06AtnhoN3okvVIEO7ETPl5rY/edit?usp=sharing');
let sheetName = sheet.getSheetByName('Sheet1');

function doPost(e) {
  let data = e.parameter;

    if (!data.name || !data.email || !data.learnerCode || !data.score) {
        return ContentService.createTextOutput("Missing required fields").setMimeType(ContentService.MimeType.TEXT);
          }

            sheetName.appendRow([data.name, data.email, data.learnerCode, data.score]);

              return ContentService.createTextOutput("Data Saved Successfully").setMimeType(ContentService.MimeType.TEXT);
              }