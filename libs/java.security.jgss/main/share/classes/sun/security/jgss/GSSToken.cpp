#include <sun/security/jgss/GSSToken.h>

#include <java/io/EOFException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace jgss {

$MethodInfo _GSSToken_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GSSToken, init$, void)},
	{"debug", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, debug, void, $String*)},
	{"getHexBytes", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, getHexBytes, $String*, $bytes*)},
	{"getHexBytes", "([BI)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, getHexBytes, $String*, $bytes*, int32_t)},
	{"getHexBytes", "([BII)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, getHexBytes, $String*, $bytes*, int32_t, int32_t)},
	{"readBigEndian", "([BII)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, readBigEndian, int32_t, $bytes*, int32_t, int32_t)},
	{"readFully", "(Ljava/io/InputStream;[B)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, readFully, void, $InputStream*, $bytes*), "java.io.IOException"},
	{"readFully", "(Ljava/io/InputStream;[BII)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, readFully, void, $InputStream*, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"readInt", "(Ljava/io/InputStream;)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, readInt, int32_t, $InputStream*), "java.io.IOException"},
	{"readInt", "([BI)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, readInt, int32_t, $bytes*, int32_t)},
	{"readLittleEndian", "([BII)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, readLittleEndian, int32_t, $bytes*, int32_t, int32_t)},
	{"writeBigEndian", "(I[B)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, writeBigEndian, void, int32_t, $bytes*)},
	{"writeBigEndian", "(I[BI)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, writeBigEndian, void, int32_t, $bytes*, int32_t)},
	{"writeInt", "(ILjava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, writeInt, void, int32_t, $OutputStream*), "java.io.IOException"},
	{"writeInt", "(I[BI)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, writeInt, int32_t, int32_t, $bytes*, int32_t)},
	{"writeLittleEndian", "(I[B)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, writeLittleEndian, void, int32_t, $bytes*)},
	{"writeLittleEndian", "(I[BI)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(GSSToken, writeLittleEndian, void, int32_t, $bytes*, int32_t)},
	{}
};

$ClassInfo _GSSToken_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.jgss.GSSToken",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GSSToken_MethodInfo_
};

$Object* allocate$GSSToken($Class* clazz) {
	return $of($alloc(GSSToken));
}

void GSSToken::init$() {
}

void GSSToken::writeLittleEndian(int32_t value, $bytes* array) {
	writeLittleEndian(value, array, 0);
}

void GSSToken::writeLittleEndian(int32_t value, $bytes* array, int32_t pos) {
	$nc(array)->set(pos++, (int8_t)(value));
	array->set(pos++, (int8_t)((int32_t)((uint32_t)value >> 8)));
	array->set(pos++, (int8_t)((int32_t)((uint32_t)value >> 16)));
	array->set(pos++, (int8_t)((int32_t)((uint32_t)value >> 24)));
}

void GSSToken::writeBigEndian(int32_t value, $bytes* array) {
	writeBigEndian(value, array, 0);
}

void GSSToken::writeBigEndian(int32_t value, $bytes* array, int32_t pos) {
	$nc(array)->set(pos++, (int8_t)((int32_t)((uint32_t)value >> 24)));
	array->set(pos++, (int8_t)((int32_t)((uint32_t)value >> 16)));
	array->set(pos++, (int8_t)((int32_t)((uint32_t)value >> 8)));
	array->set(pos++, (int8_t)(value));
}

int32_t GSSToken::readLittleEndian($bytes* data, int32_t pos, int32_t size) {
	int32_t retVal = 0;
	int32_t shifter = 0;
	while (size > 0) {
		retVal += $sl((int32_t)($nc(data)->get(pos) & (uint32_t)255), shifter);
		shifter += 8;
		++pos;
		--size;
	}
	return retVal;
}

int32_t GSSToken::readBigEndian($bytes* data, int32_t pos, int32_t size) {
	int32_t retVal = 0;
	int32_t shifter = (size - 1) * 8;
	while (size > 0) {
		retVal += $sl((int32_t)($nc(data)->get(pos) & (uint32_t)255), shifter);
		shifter -= 8;
		++pos;
		--size;
	}
	return retVal;
}

void GSSToken::writeInt(int32_t val, $OutputStream* os) {
	$nc(os)->write((int32_t)((uint32_t)val >> 8));
	os->write(val);
}

int32_t GSSToken::writeInt(int32_t val, $bytes* dest, int32_t pos) {
	$nc(dest)->set(pos++, (int8_t)((int32_t)((uint32_t)val >> 8)));
	dest->set(pos++, (int8_t)val);
	return pos;
}

int32_t GSSToken::readInt($InputStream* is) {
	int32_t var$0 = (((int32_t)(255 & (uint32_t)$nc(is)->read())) << 8);
	return (var$0 | ((int32_t)(255 & (uint32_t)is->read())));
}

int32_t GSSToken::readInt($bytes* src, int32_t pos) {
	return ((((int32_t)(255 & (uint32_t)(int32_t)$nc(src)->get(pos))) << 8) | ((int32_t)(255 & (uint32_t)(int32_t)src->get(pos + 1))));
}

void GSSToken::readFully($InputStream* is, $bytes* buffer) {
	readFully(is, buffer, 0, $nc(buffer)->length);
}

void GSSToken::readFully($InputStream* is, $bytes* buffer, int32_t offset, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t temp = 0;
	while (len > 0) {
		temp = $nc(is)->read(buffer, offset, len);
		if (temp == -1) {
			$throwNew($EOFException, $$str({"Cannot read all "_s, $$str(len), " bytes needed to form this token!"_s}));
		}
		offset += temp;
		len -= temp;
	}
}

void GSSToken::debug($String* str) {
	$nc($System::err)->print(str);
}

$String* GSSToken::getHexBytes($bytes* bytes) {
	return getHexBytes(bytes, 0, $nc(bytes)->length);
}

$String* GSSToken::getHexBytes($bytes* bytes, int32_t len) {
	return getHexBytes(bytes, 0, len);
}

$String* GSSToken::getHexBytes($bytes* bytes, int32_t pos, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = pos; i < (pos + len); ++i) {
		int32_t b1 = (int32_t)(($nc(bytes)->get(i) >> 4) & (uint32_t)15);
		int32_t b2 = (int32_t)(bytes->get(i) & (uint32_t)15);
		sb->append($($Integer::toHexString(b1)));
		sb->append($($Integer::toHexString(b2)));
		sb->append(u' ');
	}
	return sb->toString();
}

GSSToken::GSSToken() {
}

$Class* GSSToken::load$($String* name, bool initialize) {
	$loadClass(GSSToken, name, initialize, &_GSSToken_ClassInfo_, allocate$GSSToken);
	return class$;
}

$Class* GSSToken::class$ = nullptr;

		} // jgss
	} // security
} // sun