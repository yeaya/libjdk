#include <com/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray$ChunksVector.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef ER_CHUNKEDINTARRAY_NOT_SUPPORTED
#undef ER_OFFSET_BIGGER_THAN_SLOT

using $ChunkedIntArray$ChunksVector = ::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray$ChunksVector;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _ChunkedIntArray_FieldInfo_[] = {
	{"slotsize", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedIntArray, slotsize)},
	{"lowbits", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedIntArray, lowbits)},
	{"chunkalloc", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedIntArray, chunkalloc)},
	{"lowmask", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedIntArray, lowmask)},
	{"chunks", "Lcom/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray$ChunksVector;", nullptr, 0, $field(ChunkedIntArray, chunks)},
	{"fastArray", "[I", nullptr, $FINAL, $field(ChunkedIntArray, fastArray)},
	{"lastUsed", "I", nullptr, 0, $field(ChunkedIntArray, lastUsed)},
	{}
};

$MethodInfo _ChunkedIntArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(ChunkedIntArray, init$, void, int32_t)},
	{"appendSlot", "(IIII)I", nullptr, 0, $method(ChunkedIntArray, appendSlot, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"discardLast", "()V", nullptr, 0, $method(ChunkedIntArray, discardLast, void)},
	{"readEntry", "(II)I", nullptr, 0, $method(ChunkedIntArray, readEntry, int32_t, int32_t, int32_t), "java.lang.ArrayIndexOutOfBoundsException"},
	{"readSlot", "(I[I)V", nullptr, 0, $method(ChunkedIntArray, readSlot, void, int32_t, $ints*)},
	{"slotsUsed", "()I", nullptr, 0, $method(ChunkedIntArray, slotsUsed, int32_t)},
	{"specialFind", "(II)I", nullptr, 0, $method(ChunkedIntArray, specialFind, int32_t, int32_t, int32_t)},
	{"writeEntry", "(III)V", nullptr, 0, $method(ChunkedIntArray, writeEntry, void, int32_t, int32_t, int32_t), "java.lang.ArrayIndexOutOfBoundsException"},
	{"writeSlot", "(IIIII)V", nullptr, 0, $method(ChunkedIntArray, writeSlot, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _ChunkedIntArray_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray$ChunksVector", "com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray", "ChunksVector", 0},
	{}
};

$ClassInfo _ChunkedIntArray_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray",
	"java.lang.Object",
	nullptr,
	_ChunkedIntArray_FieldInfo_,
	_ChunkedIntArray_MethodInfo_,
	nullptr,
	nullptr,
	_ChunkedIntArray_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray$ChunksVector"
};

$Object* allocate$ChunkedIntArray($Class* clazz) {
	return $of($alloc(ChunkedIntArray));
}

void ChunkedIntArray::init$(int32_t slotsize) {
	$useLocalCurrentObjectStackCache();
	$set(this, chunks, $new($ChunkedIntArray$ChunksVector, this));
	$set(this, fastArray, $new($ints, ChunkedIntArray::chunkalloc));
	this->lastUsed = 0;
	if (this->slotsize < slotsize) {
		$init($XMLErrorResources);
		$throwNew($ArrayIndexOutOfBoundsException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, $$new($ObjectArray, {$($of($Integer::toString(slotsize)))}))));
	} else if (this->slotsize > slotsize) {
		$nc($System::out)->println($$str({"*****WARNING: ChunkedIntArray("_s, $$str(slotsize), ") wasting "_s, $$str((this->slotsize - slotsize)), " words per slot"_s}));
	}
	$nc(this->chunks)->addElement(this->fastArray);
}

int32_t ChunkedIntArray::appendSlot(int32_t w0, int32_t w1, int32_t w2, int32_t w3) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t slotsize = 4;
		int32_t newoffset = (this->lastUsed + 1) * slotsize;
		int32_t chunkpos = $sr(newoffset, ChunkedIntArray::lowbits);
		int32_t slotpos = ((int32_t)(newoffset & (uint32_t)ChunkedIntArray::lowmask));
		if (chunkpos > $nc(this->chunks)->size() - 1) {
			$nc(this->chunks)->addElement($$new($ints, ChunkedIntArray::chunkalloc));
		}
		$var($ints, chunk, $nc(this->chunks)->elementAt(chunkpos));
		$nc(chunk)->set(slotpos, w0);
		chunk->set(slotpos + 1, w1);
		chunk->set(slotpos + 2, w2);
		chunk->set(slotpos + 3, w3);
		return ++this->lastUsed;
	}
}

int32_t ChunkedIntArray::readEntry(int32_t position, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	{
		if (offset >= ChunkedIntArray::slotsize) {
			$init($XMLErrorResources);
			$throwNew($ArrayIndexOutOfBoundsException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_OFFSET_BIGGER_THAN_SLOT, nullptr)));
		}
		position *= ChunkedIntArray::slotsize;
		int32_t chunkpos = $sr(position, ChunkedIntArray::lowbits);
		int32_t slotpos = (int32_t)(position & (uint32_t)ChunkedIntArray::lowmask);
		$var($ints, chunk, $nc(this->chunks)->elementAt(chunkpos));
		return $nc(chunk)->get(slotpos + offset);
	}
}

int32_t ChunkedIntArray::specialFind(int32_t startPos, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t ancestor = startPos;
	while (ancestor > 0) {
		ancestor *= ChunkedIntArray::slotsize;
		int32_t chunkpos = $sr(ancestor, ChunkedIntArray::lowbits);
		int32_t slotpos = (int32_t)(ancestor & (uint32_t)ChunkedIntArray::lowmask);
		$var($ints, chunk, $nc(this->chunks)->elementAt(chunkpos));
		ancestor = $nc(chunk)->get(slotpos + 1);
		if (ancestor == position) {
			break;
		}
	}
	if (ancestor <= 0) {
		return position;
	}
	return -1;
}

int32_t ChunkedIntArray::slotsUsed() {
	return this->lastUsed;
}

void ChunkedIntArray::discardLast() {
	--this->lastUsed;
}

void ChunkedIntArray::writeEntry(int32_t position, int32_t offset, int32_t value) {
	$useLocalCurrentObjectStackCache();
	{
		if (offset >= ChunkedIntArray::slotsize) {
			$init($XMLErrorResources);
			$throwNew($ArrayIndexOutOfBoundsException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_OFFSET_BIGGER_THAN_SLOT, nullptr)));
		}
		position *= ChunkedIntArray::slotsize;
		int32_t chunkpos = $sr(position, ChunkedIntArray::lowbits);
		int32_t slotpos = (int32_t)(position & (uint32_t)ChunkedIntArray::lowmask);
		$var($ints, chunk, $nc(this->chunks)->elementAt(chunkpos));
		$nc(chunk)->set(slotpos + offset, value);
	}
}

void ChunkedIntArray::writeSlot(int32_t position, int32_t w0, int32_t w1, int32_t w2, int32_t w3) {
	$useLocalCurrentObjectStackCache();
	position *= ChunkedIntArray::slotsize;
	int32_t chunkpos = $sr(position, ChunkedIntArray::lowbits);
	int32_t slotpos = ((int32_t)(position & (uint32_t)ChunkedIntArray::lowmask));
	if (chunkpos > $nc(this->chunks)->size() - 1) {
		$nc(this->chunks)->addElement($$new($ints, ChunkedIntArray::chunkalloc));
	}
	$var($ints, chunk, $nc(this->chunks)->elementAt(chunkpos));
	$nc(chunk)->set(slotpos, w0);
	chunk->set(slotpos + 1, w1);
	chunk->set(slotpos + 2, w2);
	chunk->set(slotpos + 3, w3);
}

void ChunkedIntArray::readSlot(int32_t position, $ints* buffer) {
	$useLocalCurrentObjectStackCache();
	{
		position *= ChunkedIntArray::slotsize;
		int32_t chunkpos = $sr(position, ChunkedIntArray::lowbits);
		int32_t slotpos = ((int32_t)(position & (uint32_t)ChunkedIntArray::lowmask));
		if (chunkpos > $nc(this->chunks)->size() - 1) {
			$nc(this->chunks)->addElement($$new($ints, ChunkedIntArray::chunkalloc));
		}
		$var($ints, chunk, $nc(this->chunks)->elementAt(chunkpos));
		$System::arraycopy(chunk, slotpos, buffer, 0, ChunkedIntArray::slotsize);
	}
}

ChunkedIntArray::ChunkedIntArray() {
}

$Class* ChunkedIntArray::load$($String* name, bool initialize) {
	$loadClass(ChunkedIntArray, name, initialize, &_ChunkedIntArray_ClassInfo_, allocate$ChunkedIntArray);
	return class$;
}

$Class* ChunkedIntArray::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com