#include <com/sun/org/apache/bcel/internal/generic/RET.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnaddressType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef MAX_BYTE
#undef NO_TARGET
#undef RET
#undef WIDE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $ReturnaddressType = ::com::sun::org::apache::bcel::internal::generic::ReturnaddressType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _RET_FieldInfo_[] = {
	{"wide", "Z", nullptr, $PRIVATE, $field(RET, wide)},
	{"index", "I", nullptr, $PRIVATE, $field(RET, index)},
	{}
};

$MethodInfo _RET_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(RET, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(RET, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(RET, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(RET, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(RET, getIndex, int32_t)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(RET, getType, $Type*, $ConstantPoolGen*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(RET, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"setIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RET, setIndex, void, int32_t)},
	{"setWide", "()V", nullptr, $PRIVATE, $method(RET, setWide, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RET, toString, $String*, bool)},
	{}
};

$ClassInfo _RET_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.RET",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.IndexedInstruction,com.sun.org.apache.bcel.internal.generic.TypedInstruction",
	_RET_FieldInfo_,
	_RET_MethodInfo_
};

$Object* allocate$RET($Class* clazz) {
	return $of($alloc(RET));
}

$String* RET::toString() {
	 return this->$Instruction::toString();
}

bool RET::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t RET::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* RET::clone() {
	 return this->$Instruction::clone();
}

void RET::finalize() {
	this->$Instruction::finalize();
}

void RET::init$() {
	$Instruction::init$();
}

void RET::init$(int32_t index) {
	$Instruction::init$($Const::RET, (int16_t)2);
	setIndex(index);
}

void RET::dump($DataOutputStream* out) {
	if (this->wide) {
		$nc(out)->writeByte($Const::WIDE);
	}
	$nc(out)->writeByte($Instruction::getOpcode());
	if (this->wide) {
		out->writeShort(this->index);
	} else {
		out->writeByte(this->index);
	}
}

void RET::setWide() {
	this->wide = this->index > $Const::MAX_BYTE;
	if (this->wide) {
		$Instruction::setLength(4);
	} else {
		$Instruction::setLength(2);
	}
}

void RET::initFromFile($ByteSequence* bytes, bool wide) {
	this->wide = wide;
	if (wide) {
		this->index = $nc(bytes)->readUnsignedShort();
		$Instruction::setLength(4);
	} else {
		this->index = $nc(bytes)->readUnsignedByte();
		$Instruction::setLength(2);
	}
}

int32_t RET::getIndex() {
	return this->index;
}

void RET::setIndex(int32_t n) {
	$useLocalCurrentObjectStackCache();
	if (n < 0) {
		$throwNew($ClassGenException, $$str({"Negative index value: "_s, $$str(n)}));
	}
	this->index = n;
	setWide();
}

$String* RET::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	return $str({$($Instruction::toString(verbose)), " "_s, $$str(this->index)});
}

$Type* RET::getType($ConstantPoolGen* cp) {
	$init($ReturnaddressType);
	return $ReturnaddressType::NO_TARGET;
}

void RET::accept($Visitor* v) {
	$nc(v)->visitRET(this);
}

RET::RET() {
}

$Class* RET::load$($String* name, bool initialize) {
	$loadClass(RET, name, initialize, &_RET_ClassInfo_, allocate$RET);
	return class$;
}

$Class* RET::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com