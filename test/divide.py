
def safe_div(fn):
  def _divide(a, b):
    if b == 0:
      print("WARN: Divide by 0")
    else:
      return fn(a, b)
  return _divide

@safe_div
def divide(a, b):
  return a / b

print(divide(100, 0))
