require 'euler012'

describe 'Euler 012 solution' do
  it 'should be triangular' do
    expect(triangle(1)).to eq 3
    expect(triangle(2)).to eq 3
    expect(triangle(7)).to eq 28
    expect(triangle(100)).to eq 5050
  end

  it 'should calculate 012 correctly (test)' do
    expect(highest_divisible_triangular_number(5)).to eq 28
  end

  xit 'should calculate 012 correctly' do
    expect(highest_divisible_triangular_number(500)).to eq 76_576_500
  end
end
