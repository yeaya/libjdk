#include <jdk/internal/net/http/hpack/SizeUpdateWriter.h>

#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/BinaryRepresentationWriter.h>
#include <jdk/internal/net/http/hpack/HeaderTable.h>
#include <jdk/internal/net/http/hpack/IntegerWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $BinaryRepresentationWriter = ::jdk::internal::net::http::hpack::BinaryRepresentationWriter;
using $HeaderTable = ::jdk::internal::net::http::hpack::HeaderTable;
using $IntegerWriter = ::jdk::internal::net::http::hpack::IntegerWriter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$FieldInfo _SizeUpdateWriter_FieldInfo_[] = {
	{"intWriter", "Ljdk/internal/net/http/hpack/IntegerWriter;", nullptr, $PRIVATE | $FINAL, $field(SizeUpdateWriter, intWriter)},
	{"maxSize", "I", nullptr, $PRIVATE, $field(SizeUpdateWriter, maxSize)},
	{"tableUpdated", "Z", nullptr, $PRIVATE, $field(SizeUpdateWriter, tableUpdated)},
	{}
};

$MethodInfo _SizeUpdateWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SizeUpdateWriter, init$, void)},
	{"maxHeaderTableSize", "(I)Ljdk/internal/net/http/hpack/SizeUpdateWriter;", nullptr, 0, $method(SizeUpdateWriter, maxHeaderTableSize, SizeUpdateWriter*, int32_t)},
	{"reset", "()Ljdk/internal/net/http/hpack/BinaryRepresentationWriter;", nullptr, $PUBLIC, $virtualMethod(SizeUpdateWriter, reset, $BinaryRepresentationWriter*)},
	{"write", "(Ljdk/internal/net/http/hpack/HeaderTable;Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $virtualMethod(SizeUpdateWriter, write, bool, $HeaderTable*, $ByteBuffer*)},
	{}
};

$ClassInfo _SizeUpdateWriter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.hpack.SizeUpdateWriter",
	"java.lang.Object",
	"jdk.internal.net.http.hpack.BinaryRepresentationWriter",
	_SizeUpdateWriter_FieldInfo_,
	_SizeUpdateWriter_MethodInfo_
};

$Object* allocate$SizeUpdateWriter($Class* clazz) {
	return $of($alloc(SizeUpdateWriter));
}

void SizeUpdateWriter::init$() {
	$set(this, intWriter, $new($IntegerWriter));
}

SizeUpdateWriter* SizeUpdateWriter::maxHeaderTableSize(int32_t size) {
	$nc(this->intWriter)->configure(size, 5, 32);
	this->maxSize = size;
	return this;
}

bool SizeUpdateWriter::write($HeaderTable* table, $ByteBuffer* destination) {
	if (!this->tableUpdated) {
		$nc(table)->setMaxSize(this->maxSize);
		this->tableUpdated = true;
	}
	return $nc(this->intWriter)->write(destination);
}

$BinaryRepresentationWriter* SizeUpdateWriter::reset() {
	$nc(this->intWriter)->reset();
	this->maxSize = -1;
	this->tableUpdated = false;
	return this;
}

SizeUpdateWriter::SizeUpdateWriter() {
}

$Class* SizeUpdateWriter::load$($String* name, bool initialize) {
	$loadClass(SizeUpdateWriter, name, initialize, &_SizeUpdateWriter_ClassInfo_, allocate$SizeUpdateWriter);
	return class$;
}

$Class* SizeUpdateWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk