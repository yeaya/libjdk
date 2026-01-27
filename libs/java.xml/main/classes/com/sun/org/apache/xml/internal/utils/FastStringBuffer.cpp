#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>

#include <com/sun/org/apache/xml/internal/utils/XMLCharacterRecognizer.h>
#include <java/lang/StringBuffer.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef CARRY_WS
#undef DEBUG_FORCE_FIXED_CHUNKSIZE
#undef DEBUG_FORCE_INIT_BITS
#undef SINGLE_SPACE
#undef SUPPRESS_BOTH
#undef SUPPRESS_LEADING_WS
#undef SUPPRESS_TRAILING_WS

using $charArray2 = $Array<char16_t, 2>;
using $XMLCharacterRecognizer = ::com::sun::org::apache::xml::internal::utils::XMLCharacterRecognizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _FastStringBuffer_FieldInfo_[] = {
	{"DEBUG_FORCE_INIT_BITS", "I", nullptr, $STATIC | $FINAL, $constField(FastStringBuffer, DEBUG_FORCE_INIT_BITS)},
	{"DEBUG_FORCE_FIXED_CHUNKSIZE", "Z", nullptr, $STATIC | $FINAL, $constField(FastStringBuffer, DEBUG_FORCE_FIXED_CHUNKSIZE)},
	{"SUPPRESS_LEADING_WS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FastStringBuffer, SUPPRESS_LEADING_WS)},
	{"SUPPRESS_TRAILING_WS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FastStringBuffer, SUPPRESS_TRAILING_WS)},
	{"SUPPRESS_BOTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FastStringBuffer, SUPPRESS_BOTH)},
	{"CARRY_WS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FastStringBuffer, CARRY_WS)},
	{"m_chunkBits", "I", nullptr, 0, $field(FastStringBuffer, m_chunkBits)},
	{"m_maxChunkBits", "I", nullptr, 0, $field(FastStringBuffer, m_maxChunkBits)},
	{"m_rebundleBits", "I", nullptr, 0, $field(FastStringBuffer, m_rebundleBits)},
	{"m_chunkSize", "I", nullptr, 0, $field(FastStringBuffer, m_chunkSize)},
	{"m_chunkMask", "I", nullptr, 0, $field(FastStringBuffer, m_chunkMask)},
	{"m_array", "[[C", nullptr, 0, $field(FastStringBuffer, m_array)},
	{"m_lastChunk", "I", nullptr, 0, $field(FastStringBuffer, m_lastChunk)},
	{"m_firstFree", "I", nullptr, 0, $field(FastStringBuffer, m_firstFree)},
	{"m_innerFSB", "Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, 0, $field(FastStringBuffer, m_innerFSB)},
	{"SINGLE_SPACE", "[C", nullptr, $STATIC | $FINAL, $staticField(FastStringBuffer, SINGLE_SPACE)},
	{}
};

$MethodInfo _FastStringBuffer_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(FastStringBuffer, init$, void, int32_t, int32_t, int32_t)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(FastStringBuffer, init$, void, int32_t, int32_t)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(FastStringBuffer, init$, void, int32_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(FastStringBuffer, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PRIVATE, $method(FastStringBuffer, init$, void, FastStringBuffer*)},
	{"append", "(C)V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, append, void, char16_t)},
	{"append", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, append, void, $String*)},
	{"append", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, append, void, $StringBuffer*)},
	{"append", "([CII)V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, append, void, $chars*, int32_t, int32_t)},
	{"append", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, append, void, FastStringBuffer*)},
	{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(FastStringBuffer, charAt, char16_t, int32_t)},
	{"getChars", "(II[CI)V", nullptr, $PRIVATE, $method(FastStringBuffer, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"getOneChunkString", "(III)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(FastStringBuffer, getOneChunkString, $String*, int32_t, int32_t, int32_t)},
	{"getString", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FastStringBuffer, getString, $String*, int32_t, int32_t)},
	{"getString", "(Ljava/lang/StringBuffer;II)Ljava/lang/StringBuffer;", nullptr, 0, $virtualMethod(FastStringBuffer, getString, $StringBuffer*, $StringBuffer*, int32_t, int32_t)},
	{"getString", "(Ljava/lang/StringBuffer;III)Ljava/lang/StringBuffer;", nullptr, 0, $virtualMethod(FastStringBuffer, getString, $StringBuffer*, $StringBuffer*, int32_t, int32_t, int32_t)},
	{"isWhitespace", "(II)Z", nullptr, $PUBLIC, $virtualMethod(FastStringBuffer, isWhitespace, bool, int32_t, int32_t)},
	{"length", "()I", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, length, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, reset, void)},
	{"sendNormalizedSAXcharacters", "(Lorg/xml/sax/ContentHandler;II)I", nullptr, $PUBLIC, $virtualMethod(FastStringBuffer, sendNormalizedSAXcharacters, int32_t, $ContentHandler*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"sendNormalizedSAXcharacters", "([CIILorg/xml/sax/ContentHandler;I)I", nullptr, $STATIC, $staticMethod(FastStringBuffer, sendNormalizedSAXcharacters, int32_t, $chars*, int32_t, int32_t, $ContentHandler*, int32_t), "org.xml.sax.SAXException"},
	{"sendNormalizedSAXcharacters", "([CIILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FastStringBuffer, sendNormalizedSAXcharacters, void, $chars*, int32_t, int32_t, $ContentHandler*), "org.xml.sax.SAXException"},
	{"sendSAXComment", "(Lorg/xml/sax/ext/LexicalHandler;II)V", nullptr, $PUBLIC, $virtualMethod(FastStringBuffer, sendSAXComment, void, $LexicalHandler*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"sendSAXcharacters", "(Lorg/xml/sax/ContentHandler;II)V", nullptr, $PUBLIC, $virtualMethod(FastStringBuffer, sendSAXcharacters, void, $ContentHandler*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"setLength", "(I)V", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, setLength, void, int32_t)},
	{"setLength", "(ILcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PRIVATE | $FINAL, $method(FastStringBuffer, setLength, void, int32_t, FastStringBuffer*)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(FastStringBuffer, size, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(FastStringBuffer, toString, $String*)},
	{}
};

$ClassInfo _FastStringBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.FastStringBuffer",
	"java.lang.Object",
	nullptr,
	_FastStringBuffer_FieldInfo_,
	_FastStringBuffer_MethodInfo_
};

$Object* allocate$FastStringBuffer($Class* clazz) {
	return $of($alloc(FastStringBuffer));
}

$chars* FastStringBuffer::SINGLE_SPACE = nullptr;

void FastStringBuffer::init$(int32_t initChunkBits, int32_t maxChunkBits, int32_t rebundleBits) {
	this->m_chunkBits = 15;
	this->m_maxChunkBits = 15;
	this->m_rebundleBits = 2;
	this->m_lastChunk = 0;
	this->m_firstFree = 0;
	$set(this, m_innerFSB, nullptr);
	maxChunkBits = initChunkBits;
	$set(this, m_array, $new($charArray2, 16));
	if (initChunkBits > maxChunkBits) {
		initChunkBits = maxChunkBits;
	}
	this->m_chunkBits = initChunkBits;
	this->m_maxChunkBits = maxChunkBits;
	this->m_rebundleBits = rebundleBits;
	this->m_chunkSize = $sl(1, initChunkBits);
	this->m_chunkMask = this->m_chunkSize - 1;
	$nc(this->m_array)->set(0, $$new($chars, this->m_chunkSize));
}

void FastStringBuffer::init$(int32_t initChunkBits, int32_t maxChunkBits) {
	FastStringBuffer::init$(initChunkBits, maxChunkBits, 2);
}

void FastStringBuffer::init$(int32_t initChunkBits) {
	FastStringBuffer::init$(initChunkBits, 15, 2);
}

void FastStringBuffer::init$() {
	FastStringBuffer::init$(10, 15, 2);
}

int32_t FastStringBuffer::size() {
	return ($sl(this->m_lastChunk, this->m_chunkBits)) + this->m_firstFree;
}

int32_t FastStringBuffer::length() {
	return ($sl(this->m_lastChunk, this->m_chunkBits)) + this->m_firstFree;
}

void FastStringBuffer::reset() {
	$useLocalCurrentObjectStackCache();
	this->m_lastChunk = 0;
	this->m_firstFree = 0;
	$var(FastStringBuffer, innermost, this);
	while ($nc(innermost)->m_innerFSB != nullptr) {
		$assign(innermost, innermost->m_innerFSB);
	}
	this->m_chunkBits = $nc(innermost)->m_chunkBits;
	this->m_chunkSize = innermost->m_chunkSize;
	this->m_chunkMask = innermost->m_chunkMask;
	$set(this, m_innerFSB, nullptr);
	$set(this, m_array, $new($charArray2, 16, 0));
	$nc(this->m_array)->set(0, $$new($chars, this->m_chunkSize));
}

void FastStringBuffer::setLength(int32_t l) {
	this->m_lastChunk = $usr(l, this->m_chunkBits);
	if (this->m_lastChunk == 0 && this->m_innerFSB != nullptr) {
		$nc(this->m_innerFSB)->setLength(l, this);
	} else {
		this->m_firstFree = (int32_t)(l & (uint32_t)this->m_chunkMask);
		if (this->m_firstFree == 0 && this->m_lastChunk > 0) {
			--this->m_lastChunk;
			this->m_firstFree = this->m_chunkSize;
		}
	}
}

void FastStringBuffer::setLength(int32_t l, FastStringBuffer* rootFSB) {
	this->m_lastChunk = $usr(l, this->m_chunkBits);
	if (this->m_lastChunk == 0 && this->m_innerFSB != nullptr) {
		$nc(this->m_innerFSB)->setLength(l, rootFSB);
	} else {
		$nc(rootFSB)->m_chunkBits = this->m_chunkBits;
		rootFSB->m_maxChunkBits = this->m_maxChunkBits;
		rootFSB->m_rebundleBits = this->m_rebundleBits;
		rootFSB->m_chunkSize = this->m_chunkSize;
		rootFSB->m_chunkMask = this->m_chunkMask;
		$set(rootFSB, m_array, this->m_array);
		$set(rootFSB, m_innerFSB, this->m_innerFSB);
		rootFSB->m_lastChunk = this->m_lastChunk;
		rootFSB->m_firstFree = (int32_t)(l & (uint32_t)this->m_chunkMask);
	}
}

$String* FastStringBuffer::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t length = ($sl(this->m_lastChunk, this->m_chunkBits)) + this->m_firstFree;
	return $nc($(getString($$new($StringBuffer, length), 0, 0, length)))->toString();
}

void FastStringBuffer::append(char16_t value) {
	$useLocalCurrentObjectStackCache();
	$var($chars, chunk, nullptr);
	bool lastchunk = (this->m_lastChunk + 1 == $nc(this->m_array)->length);
	if (this->m_firstFree < this->m_chunkSize) {
		$assign(chunk, $nc(this->m_array)->get(this->m_lastChunk));
	} else {
		int32_t i = $nc(this->m_array)->length;
		if (this->m_lastChunk + 1 == i) {
			$var($charArray2, newarray, $new($charArray2, i + 16));
			$System::arraycopy(this->m_array, 0, newarray, 0, i);
			$set(this, m_array, newarray);
		}
		$assign(chunk, $nc(this->m_array)->get(++this->m_lastChunk));
		if (chunk == nullptr) {
			if (this->m_lastChunk == $sl(1, this->m_rebundleBits) && this->m_chunkBits < this->m_maxChunkBits) {
				$set(this, m_innerFSB, $new(FastStringBuffer, this));
			}
			$assign(chunk, ($nc(this->m_array)->set(this->m_lastChunk, $$new($chars, this->m_chunkSize))));
		}
		this->m_firstFree = 0;
	}
	$nc(chunk)->set(this->m_firstFree++, value);
}

void FastStringBuffer::append($String* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return;
	}
	int32_t strlen = $nc(value)->length();
	if (0 == strlen) {
		return;
	}
	int32_t copyfrom = 0;
	$var($chars, chunk, $nc(this->m_array)->get(this->m_lastChunk));
	int32_t available = this->m_chunkSize - this->m_firstFree;
	while (strlen > 0) {
		if (available > strlen) {
			available = strlen;
		}
		value->getChars(copyfrom, copyfrom + available, $nc(this->m_array)->get(this->m_lastChunk), this->m_firstFree);
		strlen -= available;
		copyfrom += available;
		if (strlen > 0) {
			int32_t i = $nc(this->m_array)->length;
			if (this->m_lastChunk + 1 == i) {
				$var($charArray2, newarray, $new($charArray2, i + 16));
				$System::arraycopy(this->m_array, 0, newarray, 0, i);
				$set(this, m_array, newarray);
			}
			$assign(chunk, $nc(this->m_array)->get(++this->m_lastChunk));
			if (chunk == nullptr) {
				if (this->m_lastChunk == $sl(1, this->m_rebundleBits) && this->m_chunkBits < this->m_maxChunkBits) {
					$set(this, m_innerFSB, $new(FastStringBuffer, this));
				}
				$assign(chunk, ($nc(this->m_array)->set(this->m_lastChunk, $$new($chars, this->m_chunkSize))));
			}
			available = this->m_chunkSize;
			this->m_firstFree = 0;
		}
	}
	this->m_firstFree += available;
}

void FastStringBuffer::append($StringBuffer* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return;
	}
	int32_t strlen = $nc(value)->length();
	if (0 == strlen) {
		return;
	}
	int32_t copyfrom = 0;
	$var($chars, chunk, $nc(this->m_array)->get(this->m_lastChunk));
	int32_t available = this->m_chunkSize - this->m_firstFree;
	while (strlen > 0) {
		if (available > strlen) {
			available = strlen;
		}
		value->getChars(copyfrom, copyfrom + available, $nc(this->m_array)->get(this->m_lastChunk), this->m_firstFree);
		strlen -= available;
		copyfrom += available;
		if (strlen > 0) {
			int32_t i = $nc(this->m_array)->length;
			if (this->m_lastChunk + 1 == i) {
				$var($charArray2, newarray, $new($charArray2, i + 16));
				$System::arraycopy(this->m_array, 0, newarray, 0, i);
				$set(this, m_array, newarray);
			}
			$assign(chunk, $nc(this->m_array)->get(++this->m_lastChunk));
			if (chunk == nullptr) {
				if (this->m_lastChunk == $sl(1, this->m_rebundleBits) && this->m_chunkBits < this->m_maxChunkBits) {
					$set(this, m_innerFSB, $new(FastStringBuffer, this));
				}
				$assign(chunk, ($nc(this->m_array)->set(this->m_lastChunk, $$new($chars, this->m_chunkSize))));
			}
			available = this->m_chunkSize;
			this->m_firstFree = 0;
		}
	}
	this->m_firstFree += available;
}

void FastStringBuffer::append($chars* chars, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t strlen = length;
	if (0 == strlen) {
		return;
	}
	int32_t copyfrom = start;
	$var($chars, chunk, $nc(this->m_array)->get(this->m_lastChunk));
	int32_t available = this->m_chunkSize - this->m_firstFree;
	while (strlen > 0) {
		if (available > strlen) {
			available = strlen;
		}
		$System::arraycopy(chars, copyfrom, $nc(this->m_array)->get(this->m_lastChunk), this->m_firstFree, available);
		strlen -= available;
		copyfrom += available;
		if (strlen > 0) {
			int32_t i = $nc(this->m_array)->length;
			if (this->m_lastChunk + 1 == i) {
				$var($charArray2, newarray, $new($charArray2, i + 16));
				$System::arraycopy(this->m_array, 0, newarray, 0, i);
				$set(this, m_array, newarray);
			}
			$assign(chunk, $nc(this->m_array)->get(++this->m_lastChunk));
			if (chunk == nullptr) {
				if (this->m_lastChunk == $sl(1, this->m_rebundleBits) && this->m_chunkBits < this->m_maxChunkBits) {
					$set(this, m_innerFSB, $new(FastStringBuffer, this));
				}
				$assign(chunk, ($nc(this->m_array)->set(this->m_lastChunk, $$new($chars, this->m_chunkSize))));
			}
			available = this->m_chunkSize;
			this->m_firstFree = 0;
		}
	}
	this->m_firstFree += available;
}

void FastStringBuffer::append(FastStringBuffer* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return;
	}
	int32_t strlen = $nc(value)->length();
	if (0 == strlen) {
		return;
	}
	int32_t copyfrom = 0;
	$var($chars, chunk, $nc(this->m_array)->get(this->m_lastChunk));
	int32_t available = this->m_chunkSize - this->m_firstFree;
	while (strlen > 0) {
		if (available > strlen) {
			available = strlen;
		}
		int32_t sourcechunk = $usr(copyfrom + value->m_chunkSize - 1, value->m_chunkBits);
		int32_t sourcecolumn = (int32_t)(copyfrom & (uint32_t)value->m_chunkMask);
		int32_t runlength = value->m_chunkSize - sourcecolumn;
		if (runlength > available) {
			runlength = available;
		}
		$System::arraycopy($nc(value->m_array)->get(sourcechunk), sourcecolumn, $nc(this->m_array)->get(this->m_lastChunk), this->m_firstFree, runlength);
		if (runlength != available) {
			$System::arraycopy($nc(value->m_array)->get(sourcechunk + 1), 0, $nc(this->m_array)->get(this->m_lastChunk), this->m_firstFree + runlength, available - runlength);
		}
		strlen -= available;
		copyfrom += available;
		if (strlen > 0) {
			int32_t i = $nc(this->m_array)->length;
			if (this->m_lastChunk + 1 == i) {
				$var($charArray2, newarray, $new($charArray2, i + 16));
				$System::arraycopy(this->m_array, 0, newarray, 0, i);
				$set(this, m_array, newarray);
			}
			$assign(chunk, $nc(this->m_array)->get(++this->m_lastChunk));
			if (chunk == nullptr) {
				if (this->m_lastChunk == $sl(1, this->m_rebundleBits) && this->m_chunkBits < this->m_maxChunkBits) {
					$set(this, m_innerFSB, $new(FastStringBuffer, this));
				}
				$assign(chunk, ($nc(this->m_array)->set(this->m_lastChunk, $$new($chars, this->m_chunkSize))));
			}
			available = this->m_chunkSize;
			this->m_firstFree = 0;
		}
	}
	this->m_firstFree += available;
}

bool FastStringBuffer::isWhitespace(int32_t start, int32_t length) {
	int32_t sourcechunk = $usr(start, this->m_chunkBits);
	int32_t sourcecolumn = (int32_t)(start & (uint32_t)this->m_chunkMask);
	int32_t available = this->m_chunkSize - sourcecolumn;
	bool chunkOK = false;
	while (length > 0) {
		int32_t runlength = (length <= available) ? length : available;
		if (sourcechunk == 0 && this->m_innerFSB != nullptr) {
			chunkOK = $nc(this->m_innerFSB)->isWhitespace(sourcecolumn, runlength);
		} else {
			chunkOK = $XMLCharacterRecognizer::isWhiteSpace($nc(this->m_array)->get(sourcechunk), sourcecolumn, runlength);
		}
		if (!chunkOK) {
			return false;
		}
		length -= runlength;
		++sourcechunk;
		sourcecolumn = 0;
		available = this->m_chunkSize;
	}
	return true;
}

$String* FastStringBuffer::getString(int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t startColumn = (int32_t)(start & (uint32_t)this->m_chunkMask);
	int32_t startChunk = $usr(start, this->m_chunkBits);
	if (startColumn + length < this->m_chunkMask && this->m_innerFSB == nullptr) {
		return getOneChunkString(startChunk, startColumn, length);
	}
	return $nc($(getString($$new($StringBuffer, length), startChunk, startColumn, length)))->toString();
}

$String* FastStringBuffer::getOneChunkString(int32_t startChunk, int32_t startColumn, int32_t length) {
	return $new($String, $nc(this->m_array)->get(startChunk), startColumn, length);
}

$StringBuffer* FastStringBuffer::getString($StringBuffer* sb, int32_t start, int32_t length) {
	return getString(sb, $usr(start, this->m_chunkBits), (int32_t)(start & (uint32_t)this->m_chunkMask), length);
}

$StringBuffer* FastStringBuffer::getString($StringBuffer* sb, int32_t startChunk, int32_t startColumn, int32_t length) {
	int32_t stop = ($sl(startChunk, this->m_chunkBits)) + startColumn + length;
	int32_t stopChunk = $usr(stop, this->m_chunkBits);
	int32_t stopColumn = (int32_t)(stop & (uint32_t)this->m_chunkMask);
	for (int32_t i = startChunk; i < stopChunk; ++i) {
		if (i == 0 && this->m_innerFSB != nullptr) {
			$nc(this->m_innerFSB)->getString(sb, startColumn, this->m_chunkSize - startColumn);
		} else {
			$nc(sb)->append($nc(this->m_array)->get(i), startColumn, this->m_chunkSize - startColumn);
		}
		startColumn = 0;
	}
	if (stopChunk == 0 && this->m_innerFSB != nullptr) {
		$nc(this->m_innerFSB)->getString(sb, startColumn, stopColumn - startColumn);
	} else if (stopColumn > startColumn) {
		$nc(sb)->append($nc(this->m_array)->get(stopChunk), startColumn, stopColumn - startColumn);
	}
	return sb;
}

char16_t FastStringBuffer::charAt(int32_t pos) {
	int32_t startChunk = $usr(pos, this->m_chunkBits);
	if (startChunk == 0 && this->m_innerFSB != nullptr) {
		return $nc(this->m_innerFSB)->charAt((int32_t)(pos & (uint32_t)this->m_chunkMask));
	} else {
		return $nc($nc(this->m_array)->get(startChunk))->get((int32_t)(pos & (uint32_t)this->m_chunkMask));
	}
}

void FastStringBuffer::sendSAXcharacters($ContentHandler* ch, int32_t start, int32_t length) {
	int32_t startChunk = $usr(start, this->m_chunkBits);
	int32_t startColumn = (int32_t)(start & (uint32_t)this->m_chunkMask);
	if (startColumn + length < this->m_chunkMask && this->m_innerFSB == nullptr) {
		$nc(ch)->characters($nc(this->m_array)->get(startChunk), startColumn, length);
		return;
	}
	int32_t stop = start + length;
	int32_t stopChunk = $usr(stop, this->m_chunkBits);
	int32_t stopColumn = (int32_t)(stop & (uint32_t)this->m_chunkMask);
	for (int32_t i = startChunk; i < stopChunk; ++i) {
		if (i == 0 && this->m_innerFSB != nullptr) {
			$nc(this->m_innerFSB)->sendSAXcharacters(ch, startColumn, this->m_chunkSize - startColumn);
		} else {
			$nc(ch)->characters($nc(this->m_array)->get(i), startColumn, this->m_chunkSize - startColumn);
		}
		startColumn = 0;
	}
	if (stopChunk == 0 && this->m_innerFSB != nullptr) {
		$nc(this->m_innerFSB)->sendSAXcharacters(ch, startColumn, stopColumn - startColumn);
	} else if (stopColumn > startColumn) {
		$nc(ch)->characters($nc(this->m_array)->get(stopChunk), startColumn, stopColumn - startColumn);
	}
}

int32_t FastStringBuffer::sendNormalizedSAXcharacters($ContentHandler* ch, int32_t start, int32_t length) {
	int32_t stateForNextChunk = FastStringBuffer::SUPPRESS_LEADING_WS;
	int32_t stop = start + length;
	int32_t startChunk = $usr(start, this->m_chunkBits);
	int32_t startColumn = (int32_t)(start & (uint32_t)this->m_chunkMask);
	int32_t stopChunk = $usr(stop, this->m_chunkBits);
	int32_t stopColumn = (int32_t)(stop & (uint32_t)this->m_chunkMask);
	for (int32_t i = startChunk; i < stopChunk; ++i) {
		if (i == 0 && this->m_innerFSB != nullptr) {
			stateForNextChunk = $nc(this->m_innerFSB)->sendNormalizedSAXcharacters(ch, startColumn, this->m_chunkSize - startColumn);
		} else {
			stateForNextChunk = sendNormalizedSAXcharacters($nc(this->m_array)->get(i), startColumn, this->m_chunkSize - startColumn, ch, stateForNextChunk);
		}
		startColumn = 0;
	}
	if (stopChunk == 0 && this->m_innerFSB != nullptr) {
		stateForNextChunk = $nc(this->m_innerFSB)->sendNormalizedSAXcharacters(ch, startColumn, stopColumn - startColumn);
	} else if (stopColumn > startColumn) {
		stateForNextChunk = sendNormalizedSAXcharacters($nc(this->m_array)->get(stopChunk), startColumn, stopColumn - startColumn, ch, stateForNextChunk | FastStringBuffer::SUPPRESS_TRAILING_WS);
	}
	return stateForNextChunk;
}

int32_t FastStringBuffer::sendNormalizedSAXcharacters($chars* ch, int32_t start, int32_t length, $ContentHandler* handler, int32_t edgeTreatmentFlags) {
	$init(FastStringBuffer);
	bool processingLeadingWhitespace = (((int32_t)(edgeTreatmentFlags & (uint32_t)FastStringBuffer::SUPPRESS_LEADING_WS)) != 0);
	bool seenWhitespace = (((int32_t)(edgeTreatmentFlags & (uint32_t)FastStringBuffer::CARRY_WS)) != 0);
	bool suppressTrailingWhitespace = (((int32_t)(edgeTreatmentFlags & (uint32_t)FastStringBuffer::SUPPRESS_TRAILING_WS)) != 0);
	int32_t currPos = start;
	int32_t limit = start + length;
	if (processingLeadingWhitespace) {
		for (; currPos < limit && $XMLCharacterRecognizer::isWhiteSpace($nc(ch)->get(currPos)); ++currPos) {
		}
		if (currPos == limit) {
			return edgeTreatmentFlags;
		}
	}
	while (currPos < limit) {
		int32_t startNonWhitespace = currPos;
		for (; currPos < limit && !$XMLCharacterRecognizer::isWhiteSpace($nc(ch)->get(currPos)); ++currPos) {
		}
		if (startNonWhitespace != currPos) {
			if (seenWhitespace) {
				$nc(handler)->characters(FastStringBuffer::SINGLE_SPACE, 0, 1);
				seenWhitespace = false;
			}
			$nc(handler)->characters(ch, startNonWhitespace, currPos - startNonWhitespace);
		}
		int32_t startWhitespace = currPos;
		for (; currPos < limit && $XMLCharacterRecognizer::isWhiteSpace($nc(ch)->get(currPos)); ++currPos) {
		}
		if (startWhitespace != currPos) {
			seenWhitespace = true;
		}
	}
	return (seenWhitespace ? FastStringBuffer::CARRY_WS : 0) | ((int32_t)(edgeTreatmentFlags & (uint32_t)FastStringBuffer::SUPPRESS_TRAILING_WS));
}

void FastStringBuffer::sendNormalizedSAXcharacters($chars* ch, int32_t start, int32_t length, $ContentHandler* handler) {
	$init(FastStringBuffer);
	sendNormalizedSAXcharacters(ch, start, length, handler, FastStringBuffer::SUPPRESS_BOTH);
}

void FastStringBuffer::sendSAXComment($LexicalHandler* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($String, comment, getString(start, length));
	$nc(ch)->comment($($nc(comment)->toCharArray()), 0, length);
}

void FastStringBuffer::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
}

void FastStringBuffer::init$(FastStringBuffer* source) {
	this->m_chunkBits = 15;
	this->m_maxChunkBits = 15;
	this->m_rebundleBits = 2;
	this->m_lastChunk = 0;
	this->m_firstFree = 0;
	$set(this, m_innerFSB, nullptr);
	this->m_chunkBits = $nc(source)->m_chunkBits;
	this->m_maxChunkBits = source->m_maxChunkBits;
	this->m_rebundleBits = source->m_rebundleBits;
	this->m_chunkSize = source->m_chunkSize;
	this->m_chunkMask = source->m_chunkMask;
	$set(this, m_array, source->m_array);
	$set(this, m_innerFSB, source->m_innerFSB);
	this->m_lastChunk = source->m_lastChunk - 1;
	this->m_firstFree = source->m_chunkSize;
	$set(source, m_array, $new($charArray2, 16));
	$set(source, m_innerFSB, this);
	source->m_lastChunk = 1;
	source->m_firstFree = 0;
	source->m_chunkBits += this->m_rebundleBits;
	source->m_chunkSize = $sl(1, source->m_chunkBits);
	source->m_chunkMask = source->m_chunkSize - 1;
}

void clinit$FastStringBuffer($Class* class$) {
	$assignStatic(FastStringBuffer::SINGLE_SPACE, $new($chars, {u' '}));
}

FastStringBuffer::FastStringBuffer() {
}

$Class* FastStringBuffer::load$($String* name, bool initialize) {
	$loadClass(FastStringBuffer, name, initialize, &_FastStringBuffer_ClassInfo_, clinit$FastStringBuffer, allocate$FastStringBuffer);
	return class$;
}

$Class* FastStringBuffer::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com