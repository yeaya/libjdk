#include <com/sun/org/apache/bcel/internal/generic/IINC.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef IINC
#undef INT
#undef MAX_BYTE
#undef MAX_VALUE
#undef MIN_VALUE
#undef WIDE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $Byte = ::java::lang::Byte;
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

$FieldInfo _IINC_FieldInfo_[] = {
	{"wide", "Z", nullptr, $PRIVATE, $field(IINC, wide)},
	{"c", "I", nullptr, $PRIVATE, $field(IINC, c)},
	{}
};

$MethodInfo _IINC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IINC, init$, void)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(IINC, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IINC, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(IINC, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getIncrement", "()I", nullptr, $PUBLIC | $FINAL, $method(IINC, getIncrement, int32_t)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(IINC, getType, $Type*, $ConstantPoolGen*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(IINC, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"setIncrement", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IINC, setIncrement, void, int32_t)},
	{"setIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(IINC, setIndex, void, int32_t)},
	{"setWide", "()V", nullptr, $PRIVATE, $method(IINC, setWide, void)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IINC, toString, $String*, bool)},
	{}
};

$ClassInfo _IINC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IINC",
	"com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction",
	nullptr,
	_IINC_FieldInfo_,
	_IINC_MethodInfo_
};

$Object* allocate$IINC($Class* clazz) {
	return $of($alloc(IINC));
}

void IINC::init$() {
	$LocalVariableInstruction::init$();
}

void IINC::init$(int32_t n, int32_t c) {
	$LocalVariableInstruction::init$();
	$LocalVariableInstruction::setOpcode($Const::IINC);
	$LocalVariableInstruction::setLength((int16_t)3);
	setIndex(n);
	setIncrement(c);
}

void IINC::dump($DataOutputStream* out) {
	if (this->wide) {
		$nc(out)->writeByte($Const::WIDE);
	}
	$nc(out)->writeByte($LocalVariableInstruction::getOpcode());
	if (this->wide) {
		out->writeShort($LocalVariableInstruction::getIndex());
		out->writeShort(this->c);
	} else {
		out->writeByte($LocalVariableInstruction::getIndex());
		out->writeByte(this->c);
	}
}

void IINC::setWide() {
	this->wide = $LocalVariableInstruction::getIndex() > $Const::MAX_BYTE;
	if (this->c > 0) {
		this->wide = this->wide || (this->c > $Byte::MAX_VALUE);
	} else {
		this->wide = this->wide || (this->c < $Byte::MIN_VALUE);
	}
	if (this->wide) {
		$LocalVariableInstruction::setLength(6);
	} else {
		$LocalVariableInstruction::setLength(3);
	}
}

void IINC::initFromFile($ByteSequence* bytes, bool wide) {
	this->wide = wide;
	if (wide) {
		$LocalVariableInstruction::setLength(6);
		$LocalVariableInstruction::setIndexOnly($nc(bytes)->readUnsignedShort());
		this->c = $nc(bytes)->readShort();
	} else {
		$LocalVariableInstruction::setLength(3);
		$LocalVariableInstruction::setIndexOnly($nc(bytes)->readUnsignedByte());
		this->c = $nc(bytes)->readByte();
	}
}

$String* IINC::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	return $str({$($LocalVariableInstruction::toString(verbose)), " "_s, $$str(this->c)});
}

void IINC::setIndex(int32_t n) {
	$useLocalCurrentObjectStackCache();
	if (n < 0) {
		$throwNew($ClassGenException, $$str({"Negative index value: "_s, $$str(n)}));
	}
	$LocalVariableInstruction::setIndexOnly(n);
	setWide();
}

int32_t IINC::getIncrement() {
	return this->c;
}

void IINC::setIncrement(int32_t c) {
	this->c = c;
	setWide();
}

$Type* IINC::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::INT;
}

void IINC::accept($Visitor* v) {
	$nc(v)->visitLocalVariableInstruction(this);
	v->visitIINC(this);
}

IINC::IINC() {
}

$Class* IINC::load$($String* name, bool initialize) {
	$loadClass(IINC, name, initialize, &_IINC_ClassInfo_, allocate$IINC);
	return class$;
}

$Class* IINC::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com