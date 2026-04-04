#include <jdk/internal/net/http/hpack/IndexedWriter.h>
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

void IndexedWriter::init$() {
	$set(this, intWriter, $new($IntegerWriter));
}

IndexedWriter* IndexedWriter::index(int32_t index) {
	this->intWriter->configure(index, 7, 128);
	return this;
}

bool IndexedWriter::write($HeaderTable* table, $ByteBuffer* destination) {
	return this->intWriter->write(destination);
}

$BinaryRepresentationWriter* IndexedWriter::reset() {
	this->intWriter->reset();
	return this;
}

IndexedWriter::IndexedWriter() {
}

$Class* IndexedWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"intWriter", "Ljdk/internal/net/http/hpack/IntegerWriter;", nullptr, $PRIVATE | $FINAL, $field(IndexedWriter, intWriter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IndexedWriter, init$, void)},
		{"index", "(I)Ljdk/internal/net/http/hpack/IndexedWriter;", nullptr, 0, $method(IndexedWriter, index, IndexedWriter*, int32_t)},
		{"reset", "()Ljdk/internal/net/http/hpack/BinaryRepresentationWriter;", nullptr, $PUBLIC, $virtualMethod(IndexedWriter, reset, $BinaryRepresentationWriter*)},
		{"write", "(Ljdk/internal/net/http/hpack/HeaderTable;Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $virtualMethod(IndexedWriter, write, bool, $HeaderTable*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.IndexedWriter",
		"java.lang.Object",
		"jdk.internal.net.http.hpack.BinaryRepresentationWriter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IndexedWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndexedWriter);
	});
	return class$;
}

$Class* IndexedWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk