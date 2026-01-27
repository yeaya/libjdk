#include <com/sun/org/apache/bcel/internal/classfile/StackMapEntry.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMapType.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef APPEND_FRAME
#undef APPEND_FRAME_MAX
#undef CHOP_FRAME
#undef CHOP_FRAME_MAX
#undef FULL_FRAME
#undef SAME_FRAME
#undef SAME_FRAME_EXTENDED
#undef SAME_FRAME_MAX
#undef SAME_LOCALS_1_STACK_ITEM_FRAME
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_MAX

using $StackMapTypeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassFormatException = ::com::sun::org::apache::bcel::internal::classfile::ClassFormatException;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Node = ::com::sun::org::apache::bcel::internal::classfile::Node;
using $StackMapType = ::com::sun::org::apache::bcel::internal::classfile::StackMapType;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$CompoundAttribute _StackMapEntry_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StackMapEntry_MethodAnnotations_setNumberOfLocals17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StackMapEntry_MethodAnnotations_setNumberOfStackItems18[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _StackMapEntry_FieldInfo_[] = {
	{"frameType", "I", nullptr, $PRIVATE, $field(StackMapEntry, frameType)},
	{"byteCodeOffset", "I", nullptr, $PRIVATE, $field(StackMapEntry, byteCodeOffset)},
	{"typesOfLocals", "[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;", nullptr, $PRIVATE, $field(StackMapEntry, typesOfLocals)},
	{"typesOfStackItems", "[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;", nullptr, $PRIVATE, $field(StackMapEntry, typesOfStackItems)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(StackMapEntry, constantPool)},
	{}
};

$MethodInfo _StackMapEntry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(StackMapEntry, init$, void, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;I[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC | $DEPRECATED, $method(StackMapEntry, init$, void, int32_t, int32_t, $StackMapTypeArray*, int32_t, $StackMapTypeArray*, $ConstantPool*), nullptr, nullptr, _StackMapEntry_MethodAnnotations_init$1},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(StackMapEntry, init$, void, int32_t, int32_t, $StackMapTypeArray*, $StackMapTypeArray*, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(StackMapEntry, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;", nullptr, $PUBLIC, $method(StackMapEntry, copy, StackMapEntry*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(StackMapEntry, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getByteCodeOffset", "()I", nullptr, $PUBLIC, $method(StackMapEntry, getByteCodeOffset, int32_t)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $method(StackMapEntry, getConstantPool, $ConstantPool*)},
	{"getFrameType", "()I", nullptr, $PUBLIC, $method(StackMapEntry, getFrameType, int32_t)},
	{"getMapEntrySize", "()I", nullptr, 0, $method(StackMapEntry, getMapEntrySize, int32_t)},
	{"getNumberOfLocals", "()I", nullptr, $PUBLIC, $method(StackMapEntry, getNumberOfLocals, int32_t)},
	{"getNumberOfStackItems", "()I", nullptr, $PUBLIC, $method(StackMapEntry, getNumberOfStackItems, int32_t)},
	{"getTypesOfLocals", "()[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;", nullptr, $PUBLIC, $method(StackMapEntry, getTypesOfLocals, $StackMapTypeArray*)},
	{"getTypesOfStackItems", "()[Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;", nullptr, $PUBLIC, $method(StackMapEntry, getTypesOfStackItems, $StackMapTypeArray*)},
	{"setByteCodeOffset", "(I)V", nullptr, $PUBLIC, $method(StackMapEntry, setByteCodeOffset, void, int32_t)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(StackMapEntry, setConstantPool, void, $ConstantPool*)},
	{"setFrameType", "(I)V", nullptr, $PUBLIC, $method(StackMapEntry, setFrameType, void, int32_t)},
	{"setNumberOfLocals", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $method(StackMapEntry, setNumberOfLocals, void, int32_t), nullptr, nullptr, _StackMapEntry_MethodAnnotations_setNumberOfLocals17},
	{"setNumberOfStackItems", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $method(StackMapEntry, setNumberOfStackItems, void, int32_t), nullptr, nullptr, _StackMapEntry_MethodAnnotations_setNumberOfStackItems18},
	{"setTypesOfLocals", "([Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;)V", nullptr, $PUBLIC, $method(StackMapEntry, setTypesOfLocals, void, $StackMapTypeArray*)},
	{"setTypesOfStackItems", "([Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;)V", nullptr, $PUBLIC, $method(StackMapEntry, setTypesOfStackItems, void, $StackMapTypeArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StackMapEntry, toString, $String*)},
	{"updateByteCodeOffset", "(I)V", nullptr, $PUBLIC, $method(StackMapEntry, updateByteCodeOffset, void, int32_t)},
	{}
};

$ClassInfo _StackMapEntry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.StackMapEntry",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.classfile.Node,java.lang.Cloneable",
	_StackMapEntry_FieldInfo_,
	_StackMapEntry_MethodInfo_
};

$Object* allocate$StackMapEntry($Class* clazz) {
	return $of($alloc(StackMapEntry));
}

int32_t StackMapEntry::hashCode() {
	 return this->$Node::hashCode();
}

bool StackMapEntry::equals(Object$* arg0) {
	 return this->$Node::equals(arg0);
}

$Object* StackMapEntry::clone() {
	 return this->$Node::clone();
}

void StackMapEntry::finalize() {
	this->$Node::finalize();
}

void StackMapEntry::init$($DataInput* input, $ConstantPool* constantPool) {
	$useLocalCurrentObjectStackCache();
	StackMapEntry::init$((int32_t)($nc(input)->readByte() & (uint32_t)255), -1, nullptr, nullptr, constantPool);
	if (this->frameType >= $Const::SAME_FRAME && this->frameType <= $Const::SAME_FRAME_MAX) {
		this->byteCodeOffset = this->frameType - $Const::SAME_FRAME;
	} else if (this->frameType >= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME && this->frameType <= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_MAX) {
		this->byteCodeOffset = this->frameType - $Const::SAME_LOCALS_1_STACK_ITEM_FRAME;
		$set(this, typesOfStackItems, $new($StackMapTypeArray, 1));
		$nc(this->typesOfStackItems)->set(0, $$new($StackMapType, input, constantPool));
	} else if (this->frameType == $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
		this->byteCodeOffset = $nc(input)->readShort();
		$set(this, typesOfStackItems, $new($StackMapTypeArray, 1));
		$nc(this->typesOfStackItems)->set(0, $$new($StackMapType, input, constantPool));
	} else if (this->frameType >= $Const::CHOP_FRAME && this->frameType <= $Const::CHOP_FRAME_MAX) {
		this->byteCodeOffset = $nc(input)->readShort();
	} else if (this->frameType == $Const::SAME_FRAME_EXTENDED) {
		this->byteCodeOffset = $nc(input)->readShort();
	} else if (this->frameType >= $Const::APPEND_FRAME && this->frameType <= $Const::APPEND_FRAME_MAX) {
		this->byteCodeOffset = $nc(input)->readShort();
		int32_t number_of_locals = this->frameType - 251;
		$set(this, typesOfLocals, $new($StackMapTypeArray, number_of_locals));
		for (int32_t i = 0; i < number_of_locals; ++i) {
			$nc(this->typesOfLocals)->set(i, $$new($StackMapType, input, constantPool));
		}
	} else if (this->frameType == $Const::FULL_FRAME) {
		this->byteCodeOffset = $nc(input)->readShort();
		int32_t number_of_locals = input->readShort();
		$set(this, typesOfLocals, $new($StackMapTypeArray, number_of_locals));
		for (int32_t i = 0; i < number_of_locals; ++i) {
			$nc(this->typesOfLocals)->set(i, $$new($StackMapType, input, constantPool));
		}
		int32_t number_of_stack_items = input->readShort();
		$set(this, typesOfStackItems, $new($StackMapTypeArray, number_of_stack_items));
		for (int32_t i = 0; i < number_of_stack_items; ++i) {
			$nc(this->typesOfStackItems)->set(i, $$new($StackMapType, input, constantPool));
		}
	} else {
		$throwNew($ClassFormatException, $$str({"Invalid frame type found while parsing stack map table: "_s, $$str(this->frameType)}));
	}
}

void StackMapEntry::init$(int32_t byteCodeOffset, int32_t numberOfLocals, $StackMapTypeArray* typesOfLocals, int32_t numberOfStackItems, $StackMapTypeArray* typesOfStackItems, $ConstantPool* constantPool) {
	this->byteCodeOffset = byteCodeOffset;
	$set(this, typesOfLocals, typesOfLocals != nullptr ? typesOfLocals : $new($StackMapTypeArray, 0));
	$set(this, typesOfStackItems, typesOfStackItems != nullptr ? typesOfStackItems : $new($StackMapTypeArray, 0));
	$set(this, constantPool, constantPool);
}

void StackMapEntry::init$(int32_t tag, int32_t byteCodeOffset, $StackMapTypeArray* typesOfLocals, $StackMapTypeArray* typesOfStackItems, $ConstantPool* constantPool) {
	this->frameType = tag;
	this->byteCodeOffset = byteCodeOffset;
	$set(this, typesOfLocals, typesOfLocals != nullptr ? typesOfLocals : $new($StackMapTypeArray, 0));
	$set(this, typesOfStackItems, typesOfStackItems != nullptr ? typesOfStackItems : $new($StackMapTypeArray, 0));
	$set(this, constantPool, constantPool);
}

void StackMapEntry::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$nc(file)->write(this->frameType);
	if (this->frameType >= $Const::SAME_FRAME && this->frameType <= $Const::SAME_FRAME_MAX) {
	} else if (this->frameType >= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME && this->frameType <= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_MAX) {
		$nc($nc(this->typesOfStackItems)->get(0))->dump(file);
	} else if (this->frameType == $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
		file->writeShort(this->byteCodeOffset);
		$nc($nc(this->typesOfStackItems)->get(0))->dump(file);
	} else if (this->frameType >= $Const::CHOP_FRAME && this->frameType <= $Const::CHOP_FRAME_MAX) {
		file->writeShort(this->byteCodeOffset);
	} else if (this->frameType == $Const::SAME_FRAME_EXTENDED) {
		file->writeShort(this->byteCodeOffset);
	} else if (this->frameType >= $Const::APPEND_FRAME && this->frameType <= $Const::APPEND_FRAME_MAX) {
		file->writeShort(this->byteCodeOffset);
		{
			$var($StackMapTypeArray, arr$, this->typesOfLocals);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StackMapType, type, arr$->get(i$));
				{
					$nc(type)->dump(file);
				}
			}
		}
	} else if (this->frameType == $Const::FULL_FRAME) {
		file->writeShort(this->byteCodeOffset);
		file->writeShort($nc(this->typesOfLocals)->length);
		{
			$var($StackMapTypeArray, arr$, this->typesOfLocals);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StackMapType, type, arr$->get(i$));
				{
					$nc(type)->dump(file);
				}
			}
		}
		file->writeShort($nc(this->typesOfStackItems)->length);
		{
			$var($StackMapTypeArray, arr$, this->typesOfStackItems);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StackMapType, type, arr$->get(i$));
				{
					$nc(type)->dump(file);
				}
			}
		}
	} else {
		$throwNew($ClassFormatException, $$str({"Invalid Stack map table tag: "_s, $$str(this->frameType)}));
	}
}

$String* StackMapEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, 64));
	buf->append("("_s);
	if (this->frameType >= $Const::SAME_FRAME && this->frameType <= $Const::SAME_FRAME_MAX) {
		buf->append("SAME"_s);
	} else if (this->frameType >= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME && this->frameType <= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_MAX) {
		buf->append("SAME_LOCALS_1_STACK"_s);
	} else if (this->frameType == $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
		buf->append("SAME_LOCALS_1_STACK_EXTENDED"_s);
	} else if (this->frameType >= $Const::CHOP_FRAME && this->frameType <= $Const::CHOP_FRAME_MAX) {
		buf->append("CHOP "_s)->append($($String::valueOf(251 - this->frameType)));
	} else if (this->frameType == $Const::SAME_FRAME_EXTENDED) {
		buf->append("SAME_EXTENDED"_s);
	} else if (this->frameType >= $Const::APPEND_FRAME && this->frameType <= $Const::APPEND_FRAME_MAX) {
		buf->append("APPEND "_s)->append($($String::valueOf(this->frameType - 251)));
	} else if (this->frameType == $Const::FULL_FRAME) {
		buf->append("FULL"_s);
	} else {
		buf->append("UNKNOWN ("_s)->append(this->frameType)->append(")"_s);
	}
	buf->append(", offset delta="_s)->append(this->byteCodeOffset);
	if ($nc(this->typesOfLocals)->length > 0) {
		buf->append(", locals={"_s);
		for (int32_t i = 0; i < $nc(this->typesOfLocals)->length; ++i) {
			buf->append($of($nc(this->typesOfLocals)->get(i)));
			if (i < $nc(this->typesOfLocals)->length - 1) {
				buf->append(", "_s);
			}
		}
		buf->append("}"_s);
	}
	if ($nc(this->typesOfStackItems)->length > 0) {
		buf->append(", stack items={"_s);
		for (int32_t i = 0; i < $nc(this->typesOfStackItems)->length; ++i) {
			buf->append($of($nc(this->typesOfStackItems)->get(i)));
			if (i < $nc(this->typesOfStackItems)->length - 1) {
				buf->append(", "_s);
			}
		}
		buf->append("}"_s);
	}
	buf->append(")"_s);
	return buf->toString();
}

int32_t StackMapEntry::getMapEntrySize() {
	$useLocalCurrentObjectStackCache();
	if (this->frameType >= $Const::SAME_FRAME && this->frameType <= $Const::SAME_FRAME_MAX) {
		return 1;
	} else if (this->frameType >= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME && this->frameType <= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_MAX) {
		return 1 + ($nc($nc(this->typesOfStackItems)->get(0))->hasIndex() ? 3 : 1);
	} else if (this->frameType == $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
		return 3 + ($nc($nc(this->typesOfStackItems)->get(0))->hasIndex() ? 3 : 1);
	} else if (this->frameType >= $Const::CHOP_FRAME && this->frameType <= $Const::CHOP_FRAME_MAX) {
		return 3;
	} else if (this->frameType == $Const::SAME_FRAME_EXTENDED) {
		return 3;
	} else if (this->frameType >= $Const::APPEND_FRAME && this->frameType <= $Const::APPEND_FRAME_MAX) {
		int32_t len = 3;
		{
			$var($StackMapTypeArray, arr$, this->typesOfLocals);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StackMapType, types_of_local, arr$->get(i$));
				{
					len += $nc(types_of_local)->hasIndex() ? 3 : 1;
				}
			}
		}
		return len;
	} else if (this->frameType == $Const::FULL_FRAME) {
		int32_t len = 7;
		{
			$var($StackMapTypeArray, arr$, this->typesOfLocals);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StackMapType, types_of_local, arr$->get(i$));
				{
					len += $nc(types_of_local)->hasIndex() ? 3 : 1;
				}
			}
		}
		{
			$var($StackMapTypeArray, arr$, this->typesOfStackItems);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StackMapType, types_of_stack_item, arr$->get(i$));
				{
					len += $nc(types_of_stack_item)->hasIndex() ? 3 : 1;
				}
			}
		}
		return len;
	} else {
		$throwNew($IllegalStateException, $$str({"Invalid StackMap frameType: "_s, $$str(this->frameType)}));
	}
}

void StackMapEntry::setFrameType(int32_t f) {
	if (f >= $Const::SAME_FRAME && f <= $Const::SAME_FRAME_MAX) {
		this->byteCodeOffset = f - $Const::SAME_FRAME;
	} else if (f >= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME && f <= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_MAX) {
		this->byteCodeOffset = f - $Const::SAME_LOCALS_1_STACK_ITEM_FRAME;
	} else if (f == $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
	} else if (f >= $Const::CHOP_FRAME && f <= $Const::CHOP_FRAME_MAX) {
	} else if (f == $Const::SAME_FRAME_EXTENDED) {
	} else if (f >= $Const::APPEND_FRAME && f <= $Const::APPEND_FRAME_MAX) {
	} else if (f == $Const::FULL_FRAME) {
	} else {
		$throwNew($IllegalArgumentException, "Invalid StackMap frameType"_s);
	}
	this->frameType = f;
}

int32_t StackMapEntry::getFrameType() {
	return this->frameType;
}

void StackMapEntry::setByteCodeOffset(int32_t new_offset) {
	$useLocalCurrentObjectStackCache();
	if (new_offset < 0 || new_offset > 32767) {
		$throwNew($IllegalArgumentException, $$str({"Invalid StackMap offset: "_s, $$str(new_offset)}));
	}
	if (this->frameType >= $Const::SAME_FRAME && this->frameType <= $Const::SAME_FRAME_MAX) {
		if (new_offset > $Const::SAME_FRAME_MAX) {
			this->frameType = $Const::SAME_FRAME_EXTENDED;
		} else {
			this->frameType = new_offset;
		}
	} else if (this->frameType >= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME && this->frameType <= $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_MAX) {
		if (new_offset > $Const::SAME_FRAME_MAX) {
			this->frameType = $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED;
		} else {
			this->frameType = $Const::SAME_LOCALS_1_STACK_ITEM_FRAME + new_offset;
		}
	} else if (this->frameType == $Const::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
	} else if (this->frameType >= $Const::CHOP_FRAME && this->frameType <= $Const::CHOP_FRAME_MAX) {
	} else if (this->frameType == $Const::SAME_FRAME_EXTENDED) {
	} else if (this->frameType >= $Const::APPEND_FRAME && this->frameType <= $Const::APPEND_FRAME_MAX) {
	} else if (this->frameType == $Const::FULL_FRAME) {
	} else {
		$throwNew($IllegalStateException, $$str({"Invalid StackMap frameType: "_s, $$str(this->frameType)}));
	}
	this->byteCodeOffset = new_offset;
}

void StackMapEntry::updateByteCodeOffset(int32_t delta) {
	setByteCodeOffset(this->byteCodeOffset + delta);
}

int32_t StackMapEntry::getByteCodeOffset() {
	return this->byteCodeOffset;
}

void StackMapEntry::setNumberOfLocals(int32_t n) {
}

int32_t StackMapEntry::getNumberOfLocals() {
	return $nc(this->typesOfLocals)->length;
}

void StackMapEntry::setTypesOfLocals($StackMapTypeArray* types) {
	$set(this, typesOfLocals, types != nullptr ? types : $new($StackMapTypeArray, 0));
}

$StackMapTypeArray* StackMapEntry::getTypesOfLocals() {
	return this->typesOfLocals;
}

void StackMapEntry::setNumberOfStackItems(int32_t n) {
}

int32_t StackMapEntry::getNumberOfStackItems() {
	return $nc(this->typesOfStackItems)->length;
}

void StackMapEntry::setTypesOfStackItems($StackMapTypeArray* types) {
	$set(this, typesOfStackItems, types != nullptr ? types : $new($StackMapTypeArray, 0));
}

$StackMapTypeArray* StackMapEntry::getTypesOfStackItems() {
	return this->typesOfStackItems;
}

StackMapEntry* StackMapEntry::copy() {
	$useLocalCurrentObjectStackCache();
	$var(StackMapEntry, e, nullptr);
	try {
		$assign(e, $cast(StackMapEntry, clone()));
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$set($nc(e), typesOfLocals, $new($StackMapTypeArray, $nc(this->typesOfLocals)->length));
	for (int32_t i = 0; i < $nc(this->typesOfLocals)->length; ++i) {
		$nc(e->typesOfLocals)->set(i, $($nc($nc(this->typesOfLocals)->get(i))->copy()));
	}
	$set(e, typesOfStackItems, $new($StackMapTypeArray, $nc(this->typesOfStackItems)->length));
	for (int32_t i = 0; i < $nc(this->typesOfStackItems)->length; ++i) {
		$nc(e->typesOfStackItems)->set(i, $($nc($nc(this->typesOfStackItems)->get(i))->copy()));
	}
	return e;
}

void StackMapEntry::accept($Visitor* v) {
	$nc(v)->visitStackMapEntry(this);
}

$ConstantPool* StackMapEntry::getConstantPool() {
	return this->constantPool;
}

void StackMapEntry::setConstantPool($ConstantPool* constantPool) {
	$set(this, constantPool, constantPool);
}

StackMapEntry::StackMapEntry() {
}

$Class* StackMapEntry::load$($String* name, bool initialize) {
	$loadClass(StackMapEntry, name, initialize, &_StackMapEntry_ClassInfo_, allocate$StackMapEntry);
	return class$;
}

$Class* StackMapEntry::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com