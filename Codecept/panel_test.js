
Feature('AP - Category');

Scenario('Add New Category', (I) => {
  I.amOnPage('https://rifky-production.mysirclo.com/admin/');
  I.waitForVisible('//*[@id="login-header"]/img');
  I.see('Password');
  I.fillField('//*[@id="login-form"]/ul/li[1]/input', 'rifky@sirclo.co.id');
  I.fillField('//*[@id="login-form"]/ul/li[2]/input', secret('testing90'));
  I.click('//*[@id="login-form"]/ul/li[3]/input');
  I.wait('3');
  I.waitForVisible('//*[@id="sidebar"]/div/a/img');
  I.click('//*[@id="sidebar"]/ul/li[3]/a');
  I.wait('2');
  I.click('//*[@id="title-buttons-inner"]/div[1]/a');
  I.fillField('//*[@id="obj-form"]/div[2]/ul/li[1]/input', 'Bagpack');
  I.scrollTo('//*[@id="obj-form"]/div[2]/ul/li[3]/select', '100', '200');
  I.click('//*[@id="obj-form"]/div[2]/ul/li[3]/select');
  I.wait('3')
  I.see('Toys');
  I.scrollPageToBottom();
  I.click('//*[@id="obj-form"]/div[2]/ul/li[14]/input');
  I.click('//*[@id="submit-btn"]');
  I.see('Categories');
});

Scenario('Edit Category Title', (I) => {
  I.amOnPage('https://rifky-production.mysirclo.com/admin/');
  I.waitForVisible('//*[@id="login-header"]/img');
  I.see('Password');
  I.fillField('//*[@id="login-form"]/ul/li[1]/input', 'rifky@sirclo.co.id');
  I.fillField('//*[@id="login-form"]/ul/li[2]/input', secret('testing90'));
  I.click('//*[@id="login-form"]/ul/li[3]/input');
  I.wait('3');
  I.waitForVisible('//*[@id="sidebar"]/div/a/img');
  I.click('//*[@id="sidebar"]/ul/li[3]/a');
  I.wait('2');
  I.scrollTo('//*[@id="manage"]/table/tbody/tr[4]/td[2]/a');
  I.see('Independence Sale');
  I.click('//*[@id="manage"]/table/tbody/tr[4]/td[2]/a');
  I.clearField('//*[@id="obj-form"]/div[2]/ul/li[1]/input');
  I.fillField('//*[@id="obj-form"]/div[2]/ul/li[1]/input', 'Boombastis Sale');
  I.click('//*[@id="submit-btn"]');
  I.see('Categories');
});
