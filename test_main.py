import unittest
import main as m


class MyTestCase_add(unittest.TestCase):
    def test_add_1_plus_10_expect_correct(self):
        self.assertEqual(1+10, m.add(1, 10))


if __name__ == '__main__':
    unittest.main()
