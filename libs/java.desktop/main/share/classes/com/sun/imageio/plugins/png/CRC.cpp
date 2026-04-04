#include <com/sun/imageio/plugins/png/CRC.h>
#include <jcpp.h>

#undef CRC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$ints* CRC::crcTable = nullptr;

void CRC::init$() {
	this->crc = -1;
}

void CRC::reset() {
	this->crc = -1;
}

void CRC::update($bytes* data, int32_t off, int32_t len) {
	int32_t c = this->crc;
	for (int32_t n = 0; n < len; ++n) {
		c = CRC::crcTable->get((c ^ $nc(data)->get(off + n)) & 0xff) ^ ((int32_t)((uint32_t)c >> 8));
	}
	this->crc = c;
}

void CRC::update(int32_t data) {
	this->crc = CRC::crcTable->get((this->crc ^ data) & 0xff) ^ ((int32_t)((uint32_t)this->crc >> 8));
}

int32_t CRC::getValue() {
	return this->crc ^ -1;
}

void CRC::clinit$($Class* clazz) {
	$assignStatic(CRC::crcTable, $new($ints, 256));
	{
		for (int32_t n = 0; n < 256; ++n) {
			int32_t c = n;
			for (int32_t k = 0; k < 8; ++k) {
				if ((c & 1) == 1) {
					c = (int32_t)0xedb88320 ^ ((int32_t)((uint32_t)c >> 1));
				} else {
					$usrAssign(c, 1);
				}
				CRC::crcTable->set(n, c);
			}
		}
	}
}

CRC::CRC() {
}

$Class* CRC::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"crcTable", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC, crcTable)},
		{"crc", "I", nullptr, $PRIVATE, $field(CRC, crc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CRC, init$, void)},
		{"getValue", "()I", nullptr, 0, $method(CRC, getValue, int32_t)},
		{"reset", "()V", nullptr, 0, $method(CRC, reset, void)},
		{"update", "([BII)V", nullptr, 0, $method(CRC, update, void, $bytes*, int32_t, int32_t)},
		{"update", "(I)V", nullptr, 0, $method(CRC, update, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.imageio.plugins.png.CRC",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CRC, name, initialize, &classInfo$$, CRC::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CRC);
	});
	return class$;
}

$Class* CRC::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com