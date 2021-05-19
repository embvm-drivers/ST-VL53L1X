#include <catch2/catch.hpp>
#include <string.h>
#include <vl53l1x.hpp>

using namespace embvm::i2c;

TEST_CASE("Create an I2C Operation - Check Recorded Data Format", "[st-vl53l1x/recording]")
{
	uint8_t ref[2] = {0x01, 0x0f};
	embvm::i2c::op_t op = {.address = 0x29,
						   .op = operation::writeRead,
						   .tx_size = 2,
						   .tx_buffer = new uint8_t[]{0x1, 0xf},
						   .rx_size = 1,
						   .rx_buffer = new uint8_t[]{0xea}};
	CHECK(op.address == 0x29);
	CHECK(op.op == embvm::i2c::operation::writeRead);
	CHECK(op.tx_size == 2);
	CHECK(0 == memcmp(op.tx_buffer, ref, op.tx_size));
	delete[] op.tx_buffer;
	delete[] op.rx_buffer;
}
