#include <jdk/internal/net/http/hpack/BulkSizeUpdateWriter.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <jdk/internal/net/http/hpack/BinaryRepresentationWriter.h>
#include <jdk/internal/net/http/hpack/HeaderTable.h>
#include <jdk/internal/net/http/hpack/SizeUpdateWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;
using $HeaderTable = ::jdk::internal::net::http::hpack::HeaderTable;
using $SizeUpdateWriter = ::jdk::internal::net::http::hpack::SizeUpdateWriter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void BulkSizeUpdateWriter::init$() {
	$set(this, writer, $new($SizeUpdateWriter));
}

BulkSizeUpdateWriter* BulkSizeUpdateWriter::maxHeaderTableSizes($Iterable* sizes) {
	if (this->configured) {
		$throwNew($IllegalStateException, "Already configured"_s);
	}
	$Objects::requireNonNull(sizes, "sizes"_s);
	$set(this, maxSizes, $nc(sizes)->iterator());
	this->configured = true;
	return this;
}

bool BulkSizeUpdateWriter::write($HeaderTable* table, $ByteBuffer* destination) {
	$useLocalObjectStack();
	if (!this->configured) {
		$throwNew($IllegalStateException, "Configure first"_s);
	}
	while (true) {
		if (this->writing) {
			if (!this->writer->write(table, destination)) {
				return false;
			}
			this->writing = false;
		} else if ($nc(this->maxSizes)->hasNext()) {
			this->writing = true;
			this->writer->reset();
			this->writer->maxHeaderTableSize($$sure($Integer, $nc(this->maxSizes)->next())->intValue());
		} else {
			this->configured = false;
			return true;
		}
	}
}

BulkSizeUpdateWriter* BulkSizeUpdateWriter::reset() {
	$set(this, maxSizes, nullptr);
	this->writing = false;
	this->configured = false;
	return this;
}

BulkSizeUpdateWriter::BulkSizeUpdateWriter() {
}

$Class* BulkSizeUpdateWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"writer", "Ljdk/internal/net/http/hpack/SizeUpdateWriter;", nullptr, $PRIVATE | $FINAL, $field(BulkSizeUpdateWriter, writer)},
		{"maxSizes", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/Integer;>;", $PRIVATE, $field(BulkSizeUpdateWriter, maxSizes)},
		{"writing", "Z", nullptr, $PRIVATE, $field(BulkSizeUpdateWriter, writing)},
		{"configured", "Z", nullptr, $PRIVATE, $field(BulkSizeUpdateWriter, configured)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BulkSizeUpdateWriter, init$, void)},
		{"maxHeaderTableSizes", "(Ljava/lang/Iterable;)Ljdk/internal/net/http/hpack/BulkSizeUpdateWriter;", "(Ljava/lang/Iterable<Ljava/lang/Integer;>;)Ljdk/internal/net/http/hpack/BulkSizeUpdateWriter;", 0, $method(BulkSizeUpdateWriter, maxHeaderTableSizes, BulkSizeUpdateWriter*, $Iterable*)},
		{"reset", "()Ljdk/internal/net/http/hpack/BulkSizeUpdateWriter;", nullptr, $PUBLIC, $virtualMethod(BulkSizeUpdateWriter, reset, BulkSizeUpdateWriter*)},
		{"write", "(Ljdk/internal/net/http/hpack/HeaderTable;Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $virtualMethod(BulkSizeUpdateWriter, write, bool, $HeaderTable*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.BulkSizeUpdateWriter",
		"java.lang.Object",
		"jdk.internal.net.http.hpack.BinaryRepresentationWriter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BulkSizeUpdateWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BulkSizeUpdateWriter);
	});
	return class$;
}

$Class* BulkSizeUpdateWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk