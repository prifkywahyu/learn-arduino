
Feature('Homepage Sirclo');

Scenario('About Us', (I) => {
    I.amOnPage('https://www.sirclo.com');
    I.waitForVisible('//*[@id="wrapper"]/div[1]/div[1]/div/div[3]');
    I.see('Penyedia Jasa');
    I.click('//*[@id="menu-item-7046"]/a');
    I.wait('3');
    I.click('//*[@id="cl_text_5d367b6606403"]/p/a');
    I.scrollPageToBottom();
    I.wait('3');
    I.click('//*[@id="cl_text_5d367b660677c"]/p/a');
    I.scrollPageToBottom();
});

Scenario('Careers', (I) => {
    I.amOnPage('https://www.sirclo.com');
    I.waitForVisible('//*[@id="wrapper"]/div[1]/div[1]/div/div[3]');
    I.see('Penyedia Jasa');
    I.click('//*[@id="menu-item-7050"]/a');
    I.wait('2');
    I.click('//*[@id="cl_text_5d367ab6de218"]/p/strong/a');
    I.wait('2');
    I.scrollTo('//*[@id="cl_toggle_5d367ab6f257e"]/h6/a/span');
    I.click('//*[@id="cl_toggle_5d367ab6f257e"]/h6/a/span');
    I.wait('5');
    I.see('Photoshop')
});
