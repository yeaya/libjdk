#include <com/sun/jndi/ldap/BerDecoder.h>
#include <com/sun/jndi/ldap/Ber$DecodeException.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <java/io/UnsupportedEncodingException.h>
#include <jcpp.h>

#undef ASN_BOOLEAN
#undef ASN_ENUMERATED
#undef ASN_INTEGER
#undef ASN_SIMPLE_STRING

using $Ber = ::com::sun::jndi::ldap::Ber;
using $Ber$DecodeException = ::com::sun::jndi::ldap::Ber$DecodeException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void BerDecoder::init$($bytes* buf, int32_t offset, int32_t bufsize) {
	$Ber::init$();
	$set(this, buf, buf);
	this->bufsize = bufsize;
	this->origOffset = offset;
	reset();
}

void BerDecoder::reset() {
	this->offset = this->origOffset;
}

int32_t BerDecoder::getParsePosition() {
	return this->offset;
}

int32_t BerDecoder::parseLength() {
	int32_t lengthbyte = parseByte();
	if ((lengthbyte & 0x80) == 0x80) {
		lengthbyte &= (uint32_t)127;
		if (lengthbyte == 0) {
			$throwNew($Ber$DecodeException, "Indefinite length not supported"_s);
		}
		if (lengthbyte > 4) {
			$throwNew($Ber$DecodeException, "encoding too long"_s);
		}
		if (this->bufsize - this->offset < lengthbyte) {
			$throwNew($Ber$DecodeException, "Insufficient data"_s);
		}
		int32_t retval = 0;
		for (int32_t i = 0; i < lengthbyte; ++i) {
			retval = (retval << 8) + ($nc(this->buf)->get(this->offset++) & 0xff);
		}
		if (retval < 0) {
			$throwNew($Ber$DecodeException, "Invalid length bytes"_s);
		}
		return retval;
	} else {
		return lengthbyte;
	}
}

int32_t BerDecoder::parseSeq($ints* rlen) {
	int32_t seq = parseByte();
	int32_t len = parseLength();
	if (rlen != nullptr) {
		rlen->set(0, len);
	}
	return seq;
}

void BerDecoder::seek(int32_t i) {
	if (this->offset + i > this->bufsize || this->offset + i < 0) {
		$throwNew($Ber$DecodeException, "array index out of bounds"_s);
	}
	this->offset += i;
}

int32_t BerDecoder::parseByte() {
	if (this->bufsize - this->offset < 1) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	return $nc(this->buf)->get(this->offset++) & 0xff;
}

int32_t BerDecoder::peekByte() {
	if (this->bufsize - this->offset < 1) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	return $nc(this->buf)->get(this->offset) & 0xff;
}

bool BerDecoder::parseBoolean() {
	return ((parseIntWithTag($Ber::ASN_BOOLEAN) == 0) ? false : true);
}

int32_t BerDecoder::parseEnumeration() {
	return parseIntWithTag($Ber::ASN_ENUMERATED);
}

int32_t BerDecoder::parseInt() {
	return parseIntWithTag($Ber::ASN_INTEGER);
}

int32_t BerDecoder::parseIntWithTag(int32_t tag) {
	$useLocalObjectStack();
	if (parseByte() != tag) {
		$var($String, s, nullptr);
		if (this->offset > 0) {
			$assign(s, $Integer::toString($nc(this->buf)->get(this->offset - 1) & 0xff));
		} else {
			$assign(s, "Empty tag"_s);
		}
		$throwNew($Ber$DecodeException, $$str({"Encountered ASN.1 tag "_s, s, " (expected tag "_s, $($Integer::toString(tag)), ")"_s}));
	}
	int32_t len = parseLength();
	if (len > 4) {
		$throwNew($Ber$DecodeException, "INTEGER too long"_s);
	} else if (len > this->bufsize - this->offset) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	int8_t fb = $nc(this->buf)->get(this->offset++);
	int32_t value = 0;
	value = fb & 0x7f;
	for (int32_t i = 1; i < len; ++i) {
		value <<= 8;
		value |= (this->buf->get(this->offset++) & 0xff);
	}
	if ((fb & 0x80) == 0x80) {
		value = -value;
	}
	return value;
}

$String* BerDecoder::parseString(bool decodeUTF8) {
	return parseStringWithTag($Ber::ASN_SIMPLE_STRING, decodeUTF8, nullptr);
}

$String* BerDecoder::parseStringWithTag(int32_t tag, bool decodeUTF8, $ints* rlen) {
	$useLocalObjectStack();
	int32_t st = 0;
	int32_t origOffset = this->offset;
	if ((st = parseByte()) != tag) {
		$throwNew($Ber$DecodeException, $$str({"Encountered ASN.1 tag "_s, $($Integer::toString((int8_t)st)), " (expected tag "_s, $$str(tag), ")"_s}));
	}
	int32_t len = parseLength();
	if (len > this->bufsize - this->offset) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	$var($String, retstr, nullptr);
	if (len == 0) {
		$assign(retstr, ""_s);
	} else {
		$var($bytes, buf2, $new($bytes, len));
		$System::arraycopy(this->buf, this->offset, buf2, 0, len);
		if (decodeUTF8) {
			try {
				$assign(retstr, $new($String, buf2, "UTF8"_s));
			} catch ($UnsupportedEncodingException& e) {
				$throwNew($Ber$DecodeException, "UTF8 not available on platform"_s);
			}
		} else {
			try {
				$assign(retstr, $new($String, buf2, "8859_1"_s));
			} catch ($UnsupportedEncodingException& e) {
				$throwNew($Ber$DecodeException, "8859_1 not available on platform"_s);
			}
		}
		this->offset += len;
	}
	if (rlen != nullptr) {
		rlen->set(0, this->offset - origOffset);
	}
	return retstr;
}

$bytes* BerDecoder::parseOctetString(int32_t tag, $ints* rlen) {
	$useLocalObjectStack();
	int32_t origOffset = this->offset;
	int32_t st = 0;
	if ((st = parseByte()) != tag) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Encountered ASN.1 tag "_s);
		var$0->append($($Integer::toString(st)));
		var$0->append(" (expected tag "_s);
		var$0->append($($Integer::toString(tag)));
		var$0->append(")"_s);
		$throwNew($Ber$DecodeException, $$str(var$0));
	}
	int32_t len = parseLength();
	if (len > this->bufsize - this->offset) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	$var($bytes, retarr, $new($bytes, len));
	if (len > 0) {
		$System::arraycopy(this->buf, this->offset, retarr, 0, len);
		this->offset += len;
	}
	if (rlen != nullptr) {
		rlen->set(0, this->offset - origOffset);
	}
	return retarr;
}

int32_t BerDecoder::bytesLeft() {
	return this->bufsize - this->offset;
}

BerDecoder::BerDecoder() {
}

$Class* BerDecoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"origOffset", "I", nullptr, $PRIVATE, $field(BerDecoder, origOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BII)V", nullptr, $PUBLIC, $method(BerDecoder, init$, void, $bytes*, int32_t, int32_t)},
		{"bytesLeft", "()I", nullptr, $PUBLIC, $method(BerDecoder, bytesLeft, int32_t)},
		{"getParsePosition", "()I", nullptr, $PUBLIC, $method(BerDecoder, getParsePosition, int32_t)},
		{"parseBoolean", "()Z", nullptr, $PUBLIC, $method(BerDecoder, parseBoolean, bool), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseByte", "()I", nullptr, $PUBLIC, $method(BerDecoder, parseByte, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseEnumeration", "()I", nullptr, $PUBLIC, $method(BerDecoder, parseEnumeration, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseInt", "()I", nullptr, $PUBLIC, $method(BerDecoder, parseInt, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseIntWithTag", "(I)I", nullptr, $PRIVATE, $method(BerDecoder, parseIntWithTag, int32_t, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseLength", "()I", nullptr, $PUBLIC, $method(BerDecoder, parseLength, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseOctetString", "(I[I)[B", nullptr, $PUBLIC, $method(BerDecoder, parseOctetString, $bytes*, int32_t, $ints*), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseSeq", "([I)I", nullptr, $PUBLIC, $method(BerDecoder, parseSeq, int32_t, $ints*), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $method(BerDecoder, parseString, $String*, bool), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"parseStringWithTag", "(IZ[I)Ljava/lang/String;", nullptr, $PUBLIC, $method(BerDecoder, parseStringWithTag, $String*, int32_t, bool, $ints*), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"peekByte", "()I", nullptr, $PUBLIC, $method(BerDecoder, peekByte, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{"reset", "()V", nullptr, $PUBLIC, $method(BerDecoder, reset, void)},
		{"seek", "(I)V", nullptr, 0, $method(BerDecoder, seek, void, int32_t), "com.sun.jndi.ldap.Ber$DecodeException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.BerDecoder",
		"com.sun.jndi.ldap.Ber",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BerDecoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BerDecoder);
	});
	return class$;
}

$Class* BerDecoder::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com