#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ALOAD
#undef ALOAD_3
#undef ASTORE
#undef ASTORE_3
#undef DLOAD
#undef DOUBLE
#undef DSTORE
#undef FLOAD
#undef FLOAT
#undef FSTORE
#undef ILOAD
#undef ILOAD_0
#undef INT
#undef ISTORE
#undef ISTORE_0
#undef LLOAD
#undef LONG
#undef LSTORE
#undef MAX_BYTE
#undef MAX_SHORT
#undef OBJECT
#undef WIDE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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

$FieldInfo _LocalVariableInstruction_FieldInfo_[] = {
	{"n", "I", nullptr, $PRIVATE, $field(LocalVariableInstruction, n)},
	{"cTag", "S", nullptr, $PRIVATE, $field(LocalVariableInstruction, cTag)},
	{"canonTag", "S", nullptr, $PRIVATE, $field(LocalVariableInstruction, canonTag)},
	{}
};

$MethodInfo _LocalVariableInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(SS)V", nullptr, 0, $method(LocalVariableInstruction, init$, void, int16_t, int16_t)},
	{"<init>", "()V", nullptr, 0, $method(LocalVariableInstruction, init$, void)},
	{"<init>", "(SSI)V", nullptr, $PROTECTED, $method(LocalVariableInstruction, init$, void, int16_t, int16_t, int32_t)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableInstruction, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getCanonicalTag", "()S", nullptr, $PUBLIC, $virtualMethod(LocalVariableInstruction, getCanonicalTag, int16_t)},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalVariableInstruction, getIndex, int32_t)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(LocalVariableInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(LocalVariableInstruction, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"setIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableInstruction, setIndex, void, int32_t)},
	{"setIndexOnly", "(I)V", nullptr, $FINAL, $method(LocalVariableInstruction, setIndexOnly, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalVariableInstruction, toString, $String*, bool)},
	{"wide", "()Z", nullptr, $PRIVATE, $method(LocalVariableInstruction, wide, bool)},
	{}
};

$ClassInfo _LocalVariableInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.IndexedInstruction",
	_LocalVariableInstruction_FieldInfo_,
	_LocalVariableInstruction_MethodInfo_
};

$Object* allocate$LocalVariableInstruction($Class* clazz) {
	return $of($alloc(LocalVariableInstruction));
}

$String* LocalVariableInstruction::toString() {
	 return this->$Instruction::toString();
}

bool LocalVariableInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t LocalVariableInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* LocalVariableInstruction::clone() {
	 return this->$Instruction::clone();
}

void LocalVariableInstruction::finalize() {
	this->$Instruction::finalize();
}

bool LocalVariableInstruction::wide() {
	return this->n > $Const::MAX_BYTE;
}

void LocalVariableInstruction::init$(int16_t canon_tag, int16_t c_tag) {
	$Instruction::init$();
	this->n = -1;
	this->cTag = (int16_t)-1;
	this->canonTag = (int16_t)-1;
	this->canonTag = canon_tag;
	this->cTag = c_tag;
}

void LocalVariableInstruction::init$() {
	$Instruction::init$();
	this->n = -1;
	this->cTag = (int16_t)-1;
	this->canonTag = (int16_t)-1;
}

void LocalVariableInstruction::init$(int16_t opcode, int16_t cTag, int32_t n) {
	$Instruction::init$(opcode, (int16_t)2);
	this->n = -1;
	this->cTag = (int16_t)-1;
	this->canonTag = (int16_t)-1;
	this->cTag = cTag;
	this->canonTag = opcode;
	setIndex(n);
}

void LocalVariableInstruction::dump($DataOutputStream* out) {
	if (wide()) {
		$nc(out)->writeByte($Const::WIDE);
	}
	$nc(out)->writeByte($Instruction::getOpcode());
	if ($Instruction::getLength() > 1) {
		if (wide()) {
			out->writeShort(this->n);
		} else {
			out->writeByte(this->n);
		}
	}
}

$String* LocalVariableInstruction::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	int16_t _opcode = $Instruction::getOpcode();
	if (((_opcode >= $Const::ILOAD_0) && (_opcode <= $Const::ALOAD_3)) || ((_opcode >= $Const::ISTORE_0) && (_opcode <= $Const::ASTORE_3))) {
		return $Instruction::toString(verbose);
	}
	return $str({$($Instruction::toString(verbose)), " "_s, $$str(this->n)});
}

void LocalVariableInstruction::initFromFile($ByteSequence* bytes, bool wide) {
	if (wide) {
		this->n = $nc(bytes)->readUnsignedShort();
		$Instruction::setLength(4);
	} else {
		int16_t _opcode = $Instruction::getOpcode();
		if (((_opcode >= $Const::ILOAD) && (_opcode <= $Const::ALOAD)) || ((_opcode >= $Const::ISTORE) && (_opcode <= $Const::ASTORE))) {
			this->n = $nc(bytes)->readUnsignedByte();
			$Instruction::setLength(2);
		} else if (_opcode <= $Const::ALOAD_3) {
			this->n = (_opcode - $Const::ILOAD_0) % 4;
			$Instruction::setLength(1);
		} else {
			this->n = (_opcode - $Const::ISTORE_0) % 4;
			$Instruction::setLength(1);
		}
	}
}

int32_t LocalVariableInstruction::getIndex() {
	return this->n;
}

void LocalVariableInstruction::setIndex(int32_t n) {
	$useLocalCurrentObjectStackCache();
	if ((n < 0) || (n > $Const::MAX_SHORT)) {
		$throwNew($ClassGenException, $$str({"Illegal value: "_s, $$str(n)}));
	}
	this->n = n;
	if (n <= 3) {
		$Instruction::setOpcode((int16_t)(this->cTag + n));
		$Instruction::setLength(1);
	} else {
		$Instruction::setOpcode(this->canonTag);
		if (wide()) {
			$Instruction::setLength(4);
		} else {
			$Instruction::setLength(2);
		}
	}
}

int16_t LocalVariableInstruction::getCanonicalTag() {
	return this->canonTag;
}

$Type* LocalVariableInstruction::getType($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	switch (this->canonTag) {
	case $Const::ILOAD:
		{}
	case $Const::ISTORE:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::LLOAD:
		{}
	case $Const::LSTORE:
		{
			$init($Type);
			return $Type::LONG;
		}
	case $Const::DLOAD:
		{}
	case $Const::DSTORE:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	case $Const::FLOAD:
		{}
	case $Const::FSTORE:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	case $Const::ALOAD:
		{}
	case $Const::ASTORE:
		{
			$init($Type);
			return $Type::OBJECT;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Unknown case in switch"_s, $$str(this->canonTag)}));
		}
	}
}

void LocalVariableInstruction::setIndexOnly(int32_t n) {
	this->n = n;
}

LocalVariableInstruction::LocalVariableInstruction() {
}

$Class* LocalVariableInstruction::load$($String* name, bool initialize) {
	$loadClass(LocalVariableInstruction, name, initialize, &_LocalVariableInstruction_ClassInfo_, allocate$LocalVariableInstruction);
	return class$;
}

$Class* LocalVariableInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com