#include <org/jcp/xml/dsig/internal/DigesterOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/security/MessageDigest.h>
#include <jcpp.h>

#undef LOG

using $UnsyncByteArrayOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncByteArrayOutputStream;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

$Logger* DigesterOutputStream::LOG = nullptr;

void DigesterOutputStream::init$($MessageDigest* md) {
	DigesterOutputStream::init$(md, false);
}

void DigesterOutputStream::init$($MessageDigest* md, bool buffer) {
	$OutputStream::init$();
	$set(this, md, md);
	this->buffer = buffer;
	if (buffer) {
		$set(this, bos, $new($UnsyncByteArrayOutputStream));
	}
}

void DigesterOutputStream::write(int32_t input) {
	if (this->buffer) {
		$nc(this->bos)->write(input);
	}
	$nc(this->md)->update((int8_t)input);
}

void DigesterOutputStream::write($bytes* input, int32_t offset, int32_t len) {
	$useLocalObjectStack();
	if (this->buffer) {
		$nc(this->bos)->write(input, offset, len);
	}
	if ($nc(DigesterOutputStream::LOG)->isDebugEnabled()) {
		DigesterOutputStream::LOG->debug("Pre-digested input:"_s);
		$var($StringBuilder, sb, $new($StringBuilder, len));
		for (int32_t i = offset; i < (offset + len); ++i) {
			sb->append((char16_t)$nc(input)->get(i));
		}
		DigesterOutputStream::LOG->debug($(sb->toString()));
	}
	$nc(this->md)->update(input, offset, len);
}

$bytes* DigesterOutputStream::getDigestValue() {
	return $nc(this->md)->digest();
}

$InputStream* DigesterOutputStream::getInputStream() {
	if (this->buffer) {
		return $new($ByteArrayInputStream, $($nc(this->bos)->toByteArray()));
	} else {
		return nullptr;
	}
}

void DigesterOutputStream::close() {
	if (this->buffer) {
		$nc(this->bos)->close();
	}
}

void DigesterOutputStream::clinit$($Class* clazz) {
	$assignStatic(DigesterOutputStream::LOG, $LoggerFactory::getLogger(DigesterOutputStream::class$));
}

DigesterOutputStream::DigesterOutputStream() {
}

$Class* DigesterOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigesterOutputStream, LOG)},
		{"buffer", "Z", nullptr, $PRIVATE | $FINAL, $field(DigesterOutputStream, buffer)},
		{"bos", "Lcom/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream;", nullptr, $PRIVATE, $field(DigesterOutputStream, bos)},
		{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(DigesterOutputStream, md)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $method(DigesterOutputStream, init$, void, $MessageDigest*)},
		{"<init>", "(Ljava/security/MessageDigest;Z)V", nullptr, $PUBLIC, $method(DigesterOutputStream, init$, void, $MessageDigest*, bool)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DigesterOutputStream, close, void), "java.io.IOException"},
		{"getDigestValue", "()[B", nullptr, $PUBLIC, $virtualMethod(DigesterOutputStream, getDigestValue, $bytes*)},
		{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(DigesterOutputStream, getInputStream, $InputStream*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(DigesterOutputStream, write, void, int32_t)},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(DigesterOutputStream, write, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.DigesterOutputStream",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DigesterOutputStream, name, initialize, &classInfo$$, DigesterOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DigesterOutputStream));
	});
	return class$;
}

$Class* DigesterOutputStream::class$ = nullptr;

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org