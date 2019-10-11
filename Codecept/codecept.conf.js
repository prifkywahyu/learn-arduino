exports.config = {
  tests: './*_test.js',
  output: './output',
  helpers: {
    Puppeteer: {
      url: 'http://localhost',
      show: true,
      windowSize: '1360x730',
      waitForNavigation: ['networkidle2', 'domcontentloaded'],
      waitForAction: 1000,
      chrome: {
        args: ['--no-sandbox', '--window-size=1360,730'],
      }
    }
  },
  include: {
    I: './steps_file.js'
  },
  bootstrap: null,
  mocha: {},
  name: 'rifkywp'
}
