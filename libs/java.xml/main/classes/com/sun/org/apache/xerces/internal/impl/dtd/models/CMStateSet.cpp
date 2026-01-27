#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

$FieldInfo _CMStateSet_FieldInfo_[] = {
	{"fBitCount", "I", nullptr, 0, $field(CMStateSet, fBitCount)},
	{"fByteCount", "I", nullptr, 0, $field(CMStateSet, fByteCount)},
	{"fBits1", "I", nullptr, 0, $field(CMStateSet, fBits1)},
	{"fBits2", "I", nullptr, 0, $field(CMStateSet, fBits2)},
	{"fByteArray", "[B", nullptr, 0, $field(CMStateSet, fByteArray)},
	{}
};

$MethodInfo _CMStateSet_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(CMStateSet, init$, void, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CMStateSet, equals, bool, Object$*)},
	{"getBit", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, getBit, bool, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(CMStateSet, hashCode, int32_t)},
	{"intersection", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, intersection, void, CMStateSet*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, isEmpty, bool)},
	{"isSameSet", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)Z", nullptr, $FINAL, $method(CMStateSet, isSameSet, bool, CMStateSet*)},
	{"setBit", "(I)V", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, setBit, void, int32_t)},
	{"setTo", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, setTo, void, CMStateSet*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CMStateSet, toString, $String*)},
	{"union", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, union$, void, CMStateSet*)},
	{"zeroBits", "()V", nullptr, $PUBLIC | $FINAL, $method(CMStateSet, zeroBits, void)},
	{}
};

$ClassInfo _CMStateSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMStateSet",
	"java.lang.Object",
	nullptr,
	_CMStateSet_FieldInfo_,
	_CMStateSet_MethodInfo_
};

$Object* allocate$CMStateSet($Class* clazz) {
	return $of($alloc(CMStateSet));
}

void CMStateSet::init$(int32_t bitCount) {
	this->fBitCount = bitCount;
	if (this->fBitCount < 0) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_CMSI"_s);
	}
	if (this->fBitCount > 64) {
		this->fByteCount = this->fBitCount / 8;
		if (this->fBitCount % 8 != 0) {
			++this->fByteCount;
		}
		$set(this, fByteArray, $new($bytes, this->fByteCount));
	}
	zeroBits();
}

$String* CMStateSet::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, strRet, $new($StringBuffer));
	try {
		strRet->append("{"_s);
		for (int32_t index = 0; index < this->fBitCount; ++index) {
			if (getBit(index)) {
				strRet->append($$str({" "_s, $$str(index)}));
			}
		}
		strRet->append(" }"_s);
	} catch ($RuntimeException& exToCatch) {
	}
	return strRet->toString();
}

void CMStateSet::intersection(CMStateSet* setToAnd) {
	if (this->fBitCount < 65) {
		this->fBits1 &= (uint32_t)$nc(setToAnd)->fBits1;
		this->fBits2 &= (uint32_t)setToAnd->fBits2;
	} else {
		for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
			(*$nc(this->fByteArray))[index] &= (uint8_t)$nc($nc(setToAnd)->fByteArray)->get(index);
		}
	}
}

bool CMStateSet::getBit(int32_t bitToGet) {
	if (bitToGet >= this->fBitCount) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_CMSI"_s);
	}
	if (this->fBitCount < 65) {
		int32_t mask = ($sl(1, bitToGet % 32));
		if (bitToGet < 32) {
			return ((int32_t)(this->fBits1 & (uint32_t)mask)) != 0;
		} else {
			return ((int32_t)(this->fBits2 & (uint32_t)mask)) != 0;
		}
	} else {
		int8_t mask = (int8_t)($sl(1, bitToGet % 8));
		int32_t ofs = bitToGet >> 3;
		return (((int32_t)($nc(this->fByteArray)->get(ofs) & (uint32_t)(int32_t)mask)) != 0);
	}
}

bool CMStateSet::isEmpty() {
	if (this->fBitCount < 65) {
		return ((this->fBits1 == 0) && (this->fBits2 == 0));
	} else {
		for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
			if ($nc(this->fByteArray)->get(index) != 0) {
				return false;
			}
		}
	}
	return true;
}

bool CMStateSet::isSameSet(CMStateSet* setToCompare) {
	if (this->fBitCount != $nc(setToCompare)->fBitCount) {
		return false;
	}
	if (this->fBitCount < 65) {
		return ((this->fBits1 == $nc(setToCompare)->fBits1) && (this->fBits2 == setToCompare->fBits2));
	}
	for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
		if ($nc(this->fByteArray)->get(index) != $nc($nc(setToCompare)->fByteArray)->get(index)) {
			return false;
		}
	}
	return true;
}

void CMStateSet::union$(CMStateSet* setToOr) {
	if (this->fBitCount < 65) {
		this->fBits1 |= $nc(setToOr)->fBits1;
		this->fBits2 |= setToOr->fBits2;
	} else {
		for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
			(*$nc(this->fByteArray))[index] |= $nc($nc(setToOr)->fByteArray)->get(index);
		}
	}
}

void CMStateSet::setBit(int32_t bitToSet) {
	if (bitToSet >= this->fBitCount) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_CMSI"_s);
	}
	if (this->fBitCount < 65) {
		int32_t mask = ($sl(1, bitToSet % 32));
		if (bitToSet < 32) {
			this->fBits1 &= (uint32_t)~mask;
			this->fBits1 |= mask;
		} else {
			this->fBits2 &= (uint32_t)~mask;
			this->fBits2 |= mask;
		}
	} else {
		int8_t mask = (int8_t)($sl(1, bitToSet % 8));
		int32_t ofs = bitToSet >> 3;
		(*$nc(this->fByteArray))[ofs] &= (uint8_t)~mask;
		(*$nc(this->fByteArray))[ofs] |= mask;
	}
}

void CMStateSet::setTo(CMStateSet* srcSet) {
	if (this->fBitCount != $nc(srcSet)->fBitCount) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_CMSI"_s);
	}
	if (this->fBitCount < 65) {
		this->fBits1 = $nc(srcSet)->fBits1;
		this->fBits2 = srcSet->fBits2;
	} else {
		for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
			$nc(this->fByteArray)->set(index, $nc($nc(srcSet)->fByteArray)->get(index));
		}
	}
}

void CMStateSet::zeroBits() {
	if (this->fBitCount < 65) {
		this->fBits1 = 0;
		this->fBits2 = 0;
	} else {
		for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
			$nc(this->fByteArray)->set(index, (int8_t)0);
		}
	}
}

bool CMStateSet::equals(Object$* o) {
	if (!($instanceOf(CMStateSet, o))) {
		return false;
	}
	return isSameSet($cast(CMStateSet, o));
}

int32_t CMStateSet::hashCode() {
	if (this->fBitCount < 65) {
		return this->fBits1 + this->fBits2 * 31;
	} else {
		int32_t hash = 0;
		for (int32_t index = this->fByteCount - 1; index >= 0; --index) {
			hash = $nc(this->fByteArray)->get(index) + hash * 31;
		}
		return hash;
	}
}

CMStateSet::CMStateSet() {
}

$Class* CMStateSet::load$($String* name, bool initialize) {
	$loadClass(CMStateSet, name, initialize, &_CMStateSet_ClassInfo_, allocate$CMStateSet);
	return class$;
}

$Class* CMStateSet::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com