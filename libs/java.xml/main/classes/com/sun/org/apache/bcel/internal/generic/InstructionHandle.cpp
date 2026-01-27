#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>

#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InstructionTargeterArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionTargeter>;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$CompoundAttribute _InstructionHandle_MethodAnnotations_addHandle3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InstructionHandle_FieldInfo_[] = {
	{"next", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionHandle, next)},
	{"prev", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionHandle, prev)},
	{"instruction", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(InstructionHandle, instruction)},
	{"i_position", "I", nullptr, $PRIVATE, $field(InstructionHandle, i_position)},
	{"targeters", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;>;", $PRIVATE, $field(InstructionHandle, targeters)},
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(InstructionHandle, attributes)},
	{}
};

$MethodInfo _InstructionHandle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PROTECTED, $method(InstructionHandle, init$, void, $Instruction*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, accept, void, $Visitor*)},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, addAttribute, void, Object$*, Object$*)},
	{"addHandle", "()V", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(InstructionHandle, addHandle, void), nullptr, nullptr, _InstructionHandle_MethodAnnotations_addHandle3},
	{"addTargeter", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;)V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, addTargeter, void, $InstructionTargeter*)},
	{"dispose", "()V", nullptr, 0, $virtualMethod(InstructionHandle, dispose, void)},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, getAttribute, $Object*, Object$*)},
	{"getAttributes", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(InstructionHandle, getAttributes, $Collection*)},
	{"getInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(InstructionHandle, getInstruction, $Instruction*)},
	{"getInstructionHandle", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $STATIC, $staticMethod(InstructionHandle, getInstructionHandle, InstructionHandle*, $Instruction*)},
	{"getNext", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC | $FINAL, $method(InstructionHandle, getNext, InstructionHandle*)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, getPosition, int32_t)},
	{"getPrev", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC | $FINAL, $method(InstructionHandle, getPrev, InstructionHandle*)},
	{"getTargeters", "()[Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, getTargeters, $InstructionTargeterArray*)},
	{"hasTargeters", "()Z", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, hasTargeters, bool)},
	{"removeAllTargeters", "()V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, removeAllTargeters, void)},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, removeAttribute, void, Object$*)},
	{"removeTargeter", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;)V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, removeTargeter, void, $InstructionTargeter*)},
	{"setInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, setInstruction, void, $Instruction*)},
	{"setNext", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $FINAL, $method(InstructionHandle, setNext, InstructionHandle*, InstructionHandle*)},
	{"setPosition", "(I)V", nullptr, 0, $virtualMethod(InstructionHandle, setPosition, void, int32_t)},
	{"setPrev", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $FINAL, $method(InstructionHandle, setPrev, InstructionHandle*, InstructionHandle*)},
	{"swapInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, swapInstruction, $Instruction*, $Instruction*)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, toString, $String*, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InstructionHandle, toString, $String*)},
	{"updatePosition", "(II)I", nullptr, $PROTECTED, $virtualMethod(InstructionHandle, updatePosition, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _InstructionHandle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.InstructionHandle",
	"java.lang.Object",
	nullptr,
	_InstructionHandle_FieldInfo_,
	_InstructionHandle_MethodInfo_
};

$Object* allocate$InstructionHandle($Class* clazz) {
	return $of($alloc(InstructionHandle));
}

void InstructionHandle::addHandle() {
}

InstructionHandle* InstructionHandle::getNext() {
	return this->next;
}

InstructionHandle* InstructionHandle::getPrev() {
	return this->prev;
}

$Instruction* InstructionHandle::getInstruction() {
	return this->instruction;
}

void InstructionHandle::setInstruction($Instruction* i) {
	if (i == nullptr) {
		$throwNew($ClassGenException, "Assigning null to handle"_s);
	}
	$load($BranchHandle);
	if (($of(this)->getClass() != $BranchHandle::class$) && ($instanceOf($BranchInstruction, i))) {
		$throwNew($ClassGenException, $$str({"Assigning branch instruction "_s, i, " to plain handle"_s}));
	}
	if (this->instruction != nullptr) {
		$nc(this->instruction)->dispose();
	}
	$set(this, instruction, i);
}

$Instruction* InstructionHandle::swapInstruction($Instruction* i) {
	$var($Instruction, oldInstruction, this->instruction);
	$set(this, instruction, i);
	return oldInstruction;
}

void InstructionHandle::init$($Instruction* i) {
	this->i_position = -1;
	setInstruction(i);
}

InstructionHandle* InstructionHandle::getInstructionHandle($Instruction* i) {
	return $new(InstructionHandle, i);
}

int32_t InstructionHandle::updatePosition(int32_t offset, int32_t max_offset) {
	this->i_position += offset;
	return 0;
}

int32_t InstructionHandle::getPosition() {
	return this->i_position;
}

void InstructionHandle::setPosition(int32_t pos) {
	this->i_position = pos;
}

void InstructionHandle::dispose() {
	$set(this, next, ($set(this, prev, nullptr)));
	$nc(this->instruction)->dispose();
	$set(this, instruction, nullptr);
	this->i_position = -1;
	$set(this, attributes, nullptr);
	removeAllTargeters();
}

void InstructionHandle::removeAllTargeters() {
	if (this->targeters != nullptr) {
		$nc(this->targeters)->clear();
	}
}

void InstructionHandle::removeTargeter($InstructionTargeter* t) {
	if (this->targeters != nullptr) {
		$nc(this->targeters)->remove(t);
	}
}

void InstructionHandle::addTargeter($InstructionTargeter* t) {
	if (this->targeters == nullptr) {
		$set(this, targeters, $new($HashSet));
	}
	$nc(this->targeters)->add(t);
}

bool InstructionHandle::hasTargeters() {
	return (this->targeters != nullptr) && ($nc(this->targeters)->size() > 0);
}

$InstructionTargeterArray* InstructionHandle::getTargeters() {
	if (!hasTargeters()) {
		return $new($InstructionTargeterArray, 0);
	}
	$var($InstructionTargeterArray, t, $new($InstructionTargeterArray, $nc(this->targeters)->size()));
	$nc(this->targeters)->toArray(t);
	return t;
}

$String* InstructionHandle::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($Utility::format(this->i_position, 4, false, u' ')), ": "_s}));
	return $concat(var$0, $($nc(this->instruction)->toString(verbose)));
}

$String* InstructionHandle::toString() {
	return toString(true);
}

void InstructionHandle::addAttribute(Object$* key, Object$* attr) {
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashMap, 3));
	}
	$nc(this->attributes)->put(key, attr);
}

void InstructionHandle::removeAttribute(Object$* key) {
	if (this->attributes != nullptr) {
		$nc(this->attributes)->remove(key);
	}
}

$Object* InstructionHandle::getAttribute(Object$* key) {
	if (this->attributes != nullptr) {
		return $of($nc(this->attributes)->get(key));
	}
	return $of(nullptr);
}

$Collection* InstructionHandle::getAttributes() {
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashMap, 3));
	}
	return $nc(this->attributes)->values();
}

void InstructionHandle::accept($Visitor* v) {
	$nc(this->instruction)->accept(v);
}

InstructionHandle* InstructionHandle::setNext(InstructionHandle* next) {
	$set(this, next, next);
	return next;
}

InstructionHandle* InstructionHandle::setPrev(InstructionHandle* prev) {
	$set(this, prev, prev);
	return prev;
}

InstructionHandle::InstructionHandle() {
}

$Class* InstructionHandle::load$($String* name, bool initialize) {
	$loadClass(InstructionHandle, name, initialize, &_InstructionHandle_ClassInfo_, allocate$InstructionHandle);
	return class$;
}

$Class* InstructionHandle::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com