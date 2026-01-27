#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/CodeExceptionGen.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList$1.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionListObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/TargetLostException.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef GOTO
#undef JSR
#undef LOOKUPSWITCH
#undef TABLESWITCH

using $CodeExceptionGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen>;
using $InstructionArray = $Array<::com::sun::org::apache::bcel::internal::generic::Instruction>;
using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $LocalVariableGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $CodeExceptionGen = ::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList$1 = ::com::sun::org::apache::bcel::internal::generic::InstructionList$1;
using $InstructionListObserver = ::com::sun::org::apache::bcel::internal::generic::InstructionListObserver;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $TargetLostException = ::com::sun::org::apache::bcel::internal::generic::TargetLostException;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _InstructionList_FieldInfo_[] = {
	{"start", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionList, start)},
	{"end", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionList, end)},
	{"length", "I", nullptr, $PRIVATE, $field(InstructionList, length)},
	{"bytePositions", "[I", nullptr, $PRIVATE, $field(InstructionList, bytePositions)},
	{"observers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/InstructionListObserver;>;", $PRIVATE, $field(InstructionList, observers)},
	{}
};

$MethodInfo _InstructionList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InstructionList, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PUBLIC, $method(InstructionList, init$, void, $Instruction*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)V", nullptr, $PUBLIC, $method(InstructionList, init$, void, $BranchInstruction*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)V", nullptr, $PUBLIC, $method(InstructionList, init$, void, $CompoundInstruction*)},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(InstructionList, init$, void, $bytes*)},
	{"addObserver", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionListObserver;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, addObserver, void, $InstructionListObserver*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $InstructionHandle*, InstructionList*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $Instruction*, InstructionList*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, InstructionList*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PRIVATE, $method(InstructionList, append, void, $InstructionHandle*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $Instruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $BranchHandle*, $BranchInstruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $Instruction*, $Instruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $Instruction*, $CompoundInstruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $CompoundInstruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $InstructionHandle*, $CompoundInstruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $InstructionHandle*, $InstructionHandle*, $Instruction*)},
	{"append", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, append, $BranchHandle*, $InstructionHandle*, $BranchInstruction*)},
	{"clear", "()V", nullptr, $PRIVATE, $method(InstructionList, clear, void)},
	{"contains", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC, $virtualMethod(InstructionList, contains, bool, $InstructionHandle*)},
	{"contains", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Z", nullptr, $PUBLIC, $virtualMethod(InstructionList, contains, bool, $Instruction*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(InstructionList, copy, InstructionList*)},
	{"delete", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, delete$, void, $InstructionHandle*), "com.sun.org.apache.bcel.internal.generic.TargetLostException"},
	{"delete", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, delete$, void, $Instruction*), "com.sun.org.apache.bcel.internal.generic.TargetLostException"},
	{"delete", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, delete$, void, $InstructionHandle*, $InstructionHandle*), "com.sun.org.apache.bcel.internal.generic.TargetLostException"},
	{"delete", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, delete$, void, $Instruction*, $Instruction*), "com.sun.org.apache.bcel.internal.generic.TargetLostException"},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(InstructionList, dispose, void)},
	{"findHandle", "([Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;[III)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionList, findHandle, $InstructionHandle*, $InstructionHandleArray*, $ints*, int32_t, int32_t)},
	{"findHandle", "(I)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, findHandle, $InstructionHandle*, int32_t)},
	{"findInstruction1", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $method(InstructionList, findInstruction1, $InstructionHandle*, $Instruction*)},
	{"findInstruction2", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $method(InstructionList, findInstruction2, $InstructionHandle*, $Instruction*)},
	{"getByteCode", "()[B", nullptr, $PUBLIC, $virtualMethod(InstructionList, getByteCode, $bytes*)},
	{"getEnd", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, getEnd, $InstructionHandle*)},
	{"getInstructionHandles", "()[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, getInstructionHandles, $InstructionHandleArray*)},
	{"getInstructionPositions", "()[I", nullptr, $PUBLIC, $virtualMethod(InstructionList, getInstructionPositions, $ints*)},
	{"getInstructions", "()[Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(InstructionList, getInstructions, $InstructionArray*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(InstructionList, getLength, int32_t)},
	{"getStart", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, getStart, $InstructionHandle*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $InstructionHandle*, InstructionList*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, InstructionList*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PRIVATE, $method(InstructionList, insert, void, $InstructionHandle*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $Instruction*, InstructionList*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $Instruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $BranchHandle*, $BranchInstruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $Instruction*, $Instruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $Instruction*, $CompoundInstruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $CompoundInstruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $InstructionHandle*, $Instruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/CompoundInstruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $InstructionHandle*, $InstructionHandle*, $CompoundInstruction*)},
	{"insert", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList, insert, $BranchHandle*, $InstructionHandle*, $BranchInstruction*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(InstructionList, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PUBLIC, $virtualMethod(InstructionList, iterator, $Iterator*)},
	{"move", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, move, void, $InstructionHandle*, $InstructionHandle*, $InstructionHandle*)},
	{"move", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, move, void, $InstructionHandle*, $InstructionHandle*)},
	{"redirectBranches", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, redirectBranches, void, $InstructionHandle*, $InstructionHandle*)},
	{"redirectExceptionHandlers", "([Lcom/sun/org/apache/bcel/internal/generic/CodeExceptionGen;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, redirectExceptionHandlers, void, $CodeExceptionGenArray*, $InstructionHandle*, $InstructionHandle*)},
	{"redirectLocalVariables", "([Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, redirectLocalVariables, void, $LocalVariableGenArray*, $InstructionHandle*, $InstructionHandle*)},
	{"remove", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PRIVATE, $method(InstructionList, remove, void, $InstructionHandle*, $InstructionHandle*), "com.sun.org.apache.bcel.internal.generic.TargetLostException"},
	{"removeObserver", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionListObserver;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, removeObserver, void, $InstructionListObserver*)},
	{"replaceConstantPool", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, replaceConstantPool, void, $ConstantPoolGen*, $ConstantPoolGen*)},
	{"setPositions", "()V", nullptr, $PUBLIC, $virtualMethod(InstructionList, setPositions, void)},
	{"setPositions", "(Z)V", nullptr, $PUBLIC, $virtualMethod(InstructionList, setPositions, void, bool)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(InstructionList, size, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InstructionList, toString, $String*)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InstructionList, toString, $String*, bool)},
	{"update", "()V", nullptr, $PUBLIC, $virtualMethod(InstructionList, update, void)},
	{}
};

$InnerClassInfo _InstructionList_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.InstructionList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InstructionList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.InstructionList",
	"java.lang.Object",
	"java.lang.Iterable",
	_InstructionList_FieldInfo_,
	_InstructionList_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;",
	nullptr,
	_InstructionList_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.InstructionList$1"
};

$Object* allocate$InstructionList($Class* clazz) {
	return $of($alloc(InstructionList));
}

void InstructionList::init$() {
	$set(this, start, nullptr);
	$set(this, end, nullptr);
	this->length = 0;
}

void InstructionList::init$($Instruction* i) {
	$set(this, start, nullptr);
	$set(this, end, nullptr);
	this->length = 0;
	append(i);
}

void InstructionList::init$($BranchInstruction* i) {
	$set(this, start, nullptr);
	$set(this, end, nullptr);
	this->length = 0;
	append(i);
}

void InstructionList::init$($CompoundInstruction* c) {
	$set(this, start, nullptr);
	$set(this, end, nullptr);
	this->length = 0;
	append($($nc(c)->getInstructionList()));
}

bool InstructionList::isEmpty() {
	return this->start == nullptr;
}

$InstructionHandle* InstructionList::findHandle($InstructionHandleArray* ihs, $ints* pos, int32_t count, int32_t target) {
	$init(InstructionList);
	int32_t l = 0;
	int32_t r = count - 1;
	do {
		int32_t i = (int32_t)((uint32_t)(l + r) >> 1);
		int32_t j = $nc(pos)->get(i);
		if (j == target) {
			return $nc(ihs)->get(i);
		} else if (target < j) {
			r = i - 1;
		} else {
			l = i + 1;
		}
	} while (l <= r);
	return nullptr;
}

$InstructionHandle* InstructionList::findHandle(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($ints, positions, this->bytePositions);
	$var($InstructionHandle, ih, this->start);
	for (int32_t i = 0; i < this->length; ++i) {
		if ($nc(positions)->get(i) == pos) {
			return ih;
		}
		$assign(ih, $nc(ih)->getNext());
	}
	return nullptr;
}

void InstructionList::init$($bytes* code) {
	$useLocalCurrentObjectStackCache();
	$set(this, start, nullptr);
	$set(this, end, nullptr);
	this->length = 0;
	int32_t count = 0;
	$var($ints, pos, nullptr);
	$var($InstructionHandleArray, ihs, nullptr);
	try {
		$var($ByteSequence, bytes, $new($ByteSequence, code));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(ihs, $new($InstructionHandleArray, $nc(code)->length));
					$assign(pos, $new($ints, code->length));
					while (bytes->available() > 0) {
						int32_t off = bytes->getIndex();
						pos->set(count, off);
						$var($Instruction, i, $Instruction::readInstruction(bytes));
						$var($InstructionHandle, ih, nullptr);
						if ($instanceOf($BranchInstruction, i)) {
							$assign(ih, append($cast($BranchInstruction, i)));
						} else {
							$assign(ih, append(i));
						}
						$nc(ih)->setPosition(off);
						ihs->set(count, ih);
						++count;
					}
				} catch ($Throwable& t$) {
					try {
						bytes->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				bytes->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
		$throwNew($ClassGenException, $(e->toString()), e);
	}
	$set(this, bytePositions, $new($ints, count));
	$System::arraycopy(pos, 0, this->bytePositions, 0, count);
	for (int32_t i = 0; i < count; ++i) {
		if ($instanceOf($BranchHandle, $nc(ihs)->get(i))) {
			$var($BranchInstruction, bi, $cast($BranchInstruction, $nc(ihs->get(i))->getInstruction()));
			int32_t var$2 = $nc(bi)->getPosition();
			int32_t target = var$2 + bi->getIndex();
			$var($InstructionHandle, ih, findHandle(ihs, pos, count, target));
			if (ih == nullptr) {
				$throwNew($ClassGenException, $$str({"Couldn\'t find target for branch: "_s, bi}));
			}
			bi->setTarget(ih);
			if ($instanceOf($Select, bi)) {
				$var($Select, s, $cast($Select, bi));
				$var($ints, indices, s->getIndices());
				for (int32_t j = 0; j < $nc(indices)->length; ++j) {
					target = bi->getPosition() + indices->get(j);
					$assign(ih, findHandle(ihs, pos, count, target));
					if (ih == nullptr) {
						$throwNew($ClassGenException, $$str({"Couldn\'t find target for switch: "_s, bi}));
					}
					s->setTarget(j, ih);
				}
			}
		}
	}
}

$InstructionHandle* InstructionList::append($InstructionHandle* ih, InstructionList* il) {
	$useLocalCurrentObjectStackCache();
	if (il == nullptr) {
		$throwNew($ClassGenException, "Appending null InstructionList"_s);
	}
	if ($nc(il)->isEmpty()) {
		return ih;
	}
	$var($InstructionHandle, next, $nc(ih)->getNext());
	$var($InstructionHandle, ret, $nc(il)->start);
	ih->setNext(il->start);
	$nc(il->start)->setPrev(ih);
	$nc(il->end)->setNext(next);
	if (next != nullptr) {
		next->setPrev(il->end);
	} else {
		$set(this, end, il->end);
	}
	this->length += il->length;
	il->clear();
	return ret;
}

$InstructionHandle* InstructionList::append($Instruction* i, InstructionList* il) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, ih, nullptr);
	if (($assign(ih, findInstruction2(i))) == nullptr) {
		$throwNew($ClassGenException, $$str({"Instruction "_s, i, " is not contained in this list."_s}));
	}
	return append(ih, il);
}

$InstructionHandle* InstructionList::append(InstructionList* il) {
	if (il == nullptr) {
		$throwNew($ClassGenException, "Appending null InstructionList"_s);
	}
	if ($nc(il)->isEmpty()) {
		return nullptr;
	}
	if (isEmpty()) {
		$set(this, start, $nc(il)->start);
		$set(this, end, il->end);
		this->length = il->length;
		il->clear();
		return this->start;
	}
	return append(this->end, il);
}

void InstructionList::append($InstructionHandle* ih) {
	if (isEmpty()) {
		$set(this, start, ($set(this, end, ih)));
		$nc(ih)->setNext($(ih->setPrev(nullptr)));
	} else {
		$nc(this->end)->setNext(ih);
		$nc(ih)->setPrev(this->end);
		ih->setNext(nullptr);
		$set(this, end, ih);
	}
	++this->length;
}

$InstructionHandle* InstructionList::append($Instruction* i) {
	$var($InstructionHandle, ih, $InstructionHandle::getInstructionHandle(i));
	append(ih);
	return ih;
}

$BranchHandle* InstructionList::append($BranchInstruction* i) {
	$var($BranchHandle, ih, $BranchHandle::getBranchHandle(i));
	append(static_cast<$InstructionHandle*>(ih));
	return ih;
}

$InstructionHandle* InstructionList::append($Instruction* i, $Instruction* j) {
	return append(i, $$new(InstructionList, j));
}

$InstructionHandle* InstructionList::append($Instruction* i, $CompoundInstruction* c) {
	return append(i, $($nc(c)->getInstructionList()));
}

$InstructionHandle* InstructionList::append($CompoundInstruction* c) {
	return append($($nc(c)->getInstructionList()));
}

$InstructionHandle* InstructionList::append($InstructionHandle* ih, $CompoundInstruction* c) {
	return append(ih, $($nc(c)->getInstructionList()));
}

$InstructionHandle* InstructionList::append($InstructionHandle* ih, $Instruction* i) {
	return append(ih, $$new(InstructionList, i));
}

$BranchHandle* InstructionList::append($InstructionHandle* ih, $BranchInstruction* i) {
	$useLocalCurrentObjectStackCache();
	$var($BranchHandle, bh, $BranchHandle::getBranchHandle(i));
	$var(InstructionList, il, $new(InstructionList));
	il->append(static_cast<$InstructionHandle*>(bh));
	append(ih, il);
	return bh;
}

$InstructionHandle* InstructionList::insert($InstructionHandle* ih, InstructionList* il) {
	$useLocalCurrentObjectStackCache();
	if (il == nullptr) {
		$throwNew($ClassGenException, "Inserting null InstructionList"_s);
	}
	if ($nc(il)->isEmpty()) {
		return ih;
	}
	$var($InstructionHandle, prev, $nc(ih)->getPrev());
	$var($InstructionHandle, ret, $nc(il)->start);
	ih->setPrev(il->end);
	$nc(il->end)->setNext(ih);
	$nc(il->start)->setPrev(prev);
	if (prev != nullptr) {
		prev->setNext(il->start);
	} else {
		$set(this, start, il->start);
	}
	this->length += il->length;
	il->clear();
	return ret;
}

$InstructionHandle* InstructionList::insert(InstructionList* il) {
	if (isEmpty()) {
		append(il);
		return this->start;
	}
	return insert(this->start, il);
}

void InstructionList::insert($InstructionHandle* ih) {
	if (isEmpty()) {
		$set(this, start, ($set(this, end, ih)));
		$nc(ih)->setNext($(ih->setPrev(nullptr)));
	} else {
		$nc(this->start)->setPrev(ih);
		$nc(ih)->setNext(this->start);
		ih->setPrev(nullptr);
		$set(this, start, ih);
	}
	++this->length;
}

$InstructionHandle* InstructionList::insert($Instruction* i, InstructionList* il) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, ih, nullptr);
	if (($assign(ih, findInstruction1(i))) == nullptr) {
		$throwNew($ClassGenException, $$str({"Instruction "_s, i, " is not contained in this list."_s}));
	}
	return insert(ih, il);
}

$InstructionHandle* InstructionList::insert($Instruction* i) {
	$var($InstructionHandle, ih, $InstructionHandle::getInstructionHandle(i));
	insert(ih);
	return ih;
}

$BranchHandle* InstructionList::insert($BranchInstruction* i) {
	$var($BranchHandle, ih, $BranchHandle::getBranchHandle(i));
	insert(static_cast<$InstructionHandle*>(ih));
	return ih;
}

$InstructionHandle* InstructionList::insert($Instruction* i, $Instruction* j) {
	return insert(i, $$new(InstructionList, j));
}

$InstructionHandle* InstructionList::insert($Instruction* i, $CompoundInstruction* c) {
	return insert(i, $($nc(c)->getInstructionList()));
}

$InstructionHandle* InstructionList::insert($CompoundInstruction* c) {
	return insert($($nc(c)->getInstructionList()));
}

$InstructionHandle* InstructionList::insert($InstructionHandle* ih, $Instruction* i) {
	return insert(ih, $$new(InstructionList, i));
}

$InstructionHandle* InstructionList::insert($InstructionHandle* ih, $CompoundInstruction* c) {
	return insert(ih, $($nc(c)->getInstructionList()));
}

$BranchHandle* InstructionList::insert($InstructionHandle* ih, $BranchInstruction* i) {
	$useLocalCurrentObjectStackCache();
	$var($BranchHandle, bh, $BranchHandle::getBranchHandle(i));
	$var(InstructionList, il, $new(InstructionList));
	il->append(static_cast<$InstructionHandle*>(bh));
	insert(ih, il);
	return bh;
}

void InstructionList::move($InstructionHandle* start, $InstructionHandle* end, $InstructionHandle* target) {
	$useLocalCurrentObjectStackCache();
	if ((start == nullptr) || (end == nullptr)) {
		$throwNew($ClassGenException, $$str({"Invalid null handle: From "_s, start, " to "_s, end}));
	}
	if ((target == start) || (target == end)) {
		$throwNew($ClassGenException, $$str({"Invalid range: From "_s, start, " to "_s, end, " contains target "_s, target}));
	}
	{
		$var($InstructionHandle, ih, start);
		for (; ih != $nc(end)->getNext(); $assign(ih, $nc(ih)->getNext())) {
			if (ih == nullptr) {
				$throwNew($ClassGenException, $$str({"Invalid range: From "_s, start, " to "_s, end}));
			} else if (ih == target) {
				$throwNew($ClassGenException, $$str({"Invalid range: From "_s, start, " to "_s, end, " contains target "_s, target}));
			}
		}
	}
	$var($InstructionHandle, prev, $nc(start)->getPrev());
	$var($InstructionHandle, next, $nc(end)->getNext());
	if (prev != nullptr) {
		prev->setNext(next);
	} else {
		$set(this, start, next);
	}
	if (next != nullptr) {
		next->setPrev(prev);
	} else {
		$set(this, end, prev);
	}
	start->setPrev($(end->setNext(nullptr)));
	if (target == nullptr) {
		if (this->start != nullptr) {
			$nc(this->start)->setPrev(end);
		}
		end->setNext(this->start);
		$set(this, start, start);
	} else {
		$assign(next, $nc(target)->getNext());
		target->setNext(start);
		start->setPrev(target);
		end->setNext(next);
		if (next != nullptr) {
			next->setPrev(end);
		} else {
			$set(this, end, end);
		}
	}
}

void InstructionList::move($InstructionHandle* ih, $InstructionHandle* target) {
	move(ih, ih, target);
}

void InstructionList::remove($InstructionHandle* prev, $InstructionHandle* next$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, next, next$renamed);
	$var($InstructionHandle, first, nullptr);
	$var($InstructionHandle, last, nullptr);
	if ((prev == nullptr) && (next == nullptr)) {
		$assign(first, this->start);
		$assign(last, this->end);
		$set(this, start, ($set(this, end, nullptr)));
	} else {
		if (prev == nullptr) {
			$assign(first, this->start);
			$set(this, start, next);
		} else {
			$assign(first, $nc(prev)->getNext());
			prev->setNext(next);
		}
		if (next == nullptr) {
			$assign(last, this->end);
			$set(this, end, prev);
		} else {
			$assign(last, $nc(next)->getPrev());
			next->setPrev(prev);
		}
	}
	$nc(first)->setPrev(nullptr);
	$nc(last)->setNext(nullptr);
	$var($List, target_vec, $new($ArrayList));
	{
		$var($InstructionHandle, ih, first);
		for (; ih != nullptr; $assign(ih, ih->getNext())) {
			$nc($($nc(ih)->getInstruction()))->dispose();
		}
	}
	$var($StringBuilder, buf, $new($StringBuilder, "{ "_s));
	{
		$var($InstructionHandle, ih, first);
		for (; ih != nullptr; $assign(ih, next)) {
			$assign(next, $nc(ih)->getNext());
			--this->length;
			if (ih->hasTargeters()) {
				target_vec->add(ih);
				buf->append($(ih->toString(true)))->append(" "_s);
				ih->setNext($(ih->setPrev(nullptr)));
			} else {
				ih->dispose();
			}
		}
	}
	buf->append("}"_s);
	if (!target_vec->isEmpty()) {
		$var($InstructionHandleArray, targeted, $new($InstructionHandleArray, target_vec->size()));
		target_vec->toArray(targeted);
		$throwNew($TargetLostException, targeted, $(buf->toString()));
	}
}

void InstructionList::delete$($InstructionHandle* ih) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, var$0, $nc(ih)->getPrev());
	remove(var$0, $(ih->getNext()));
}

void InstructionList::delete$($Instruction* i) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, ih, nullptr);
	if (($assign(ih, findInstruction1(i))) == nullptr) {
		$throwNew($ClassGenException, $$str({"Instruction "_s, i, " is not contained in this list."_s}));
	}
	delete$(ih);
}

void InstructionList::delete$($InstructionHandle* from, $InstructionHandle* to) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, var$0, $nc(from)->getPrev());
	remove(var$0, $($nc(to)->getNext()));
}

void InstructionList::delete$($Instruction* from, $Instruction* to) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, from_ih, nullptr);
	$var($InstructionHandle, to_ih, nullptr);
	if (($assign(from_ih, findInstruction1(from))) == nullptr) {
		$throwNew($ClassGenException, $$str({"Instruction "_s, from, " is not contained in this list."_s}));
	}
	if (($assign(to_ih, findInstruction2(to))) == nullptr) {
		$throwNew($ClassGenException, $$str({"Instruction "_s, to, " is not contained in this list."_s}));
	}
	delete$(from_ih, to_ih);
}

$InstructionHandle* InstructionList::findInstruction1($Instruction* i) {
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			if (ih->getInstruction() == i) {
				return ih;
			}
		}
	}
	return nullptr;
}

$InstructionHandle* InstructionList::findInstruction2($Instruction* i) {
	{
		$var($InstructionHandle, ih, this->end);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getPrev())) {
			if (ih->getInstruction() == i) {
				return ih;
			}
		}
	}
	return nullptr;
}

bool InstructionList::contains($InstructionHandle* i) {
	if (i == nullptr) {
		return false;
	}
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			if (ih == i) {
				return true;
			}
		}
	}
	return false;
}

bool InstructionList::contains($Instruction* i) {
	return findInstruction1(i) != nullptr;
}

void InstructionList::setPositions() {
	setPositions(false);
}

void InstructionList::setPositions(bool check) {
	$useLocalCurrentObjectStackCache();
	int32_t max_additional_bytes = 0;
	int32_t additional_bytes = 0;
	int32_t index = 0;
	int32_t count = 0;
	$var($ints, pos, $new($ints, this->length));
	if (check) {
		{
			$var($InstructionHandle, ih, this->start);
			for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
				$var($Instruction, i, ih->getInstruction());
				if ($instanceOf($BranchInstruction, i)) {
					$var($Instruction, inst, $nc($($nc(($cast($BranchInstruction, i)))->getTarget()))->getInstruction());
					if (!contains(inst)) {
						$throwNew($ClassGenException, $$str({"Branch target of "_s, $($Const::getOpcodeName($nc(i)->getOpcode())), ":"_s, inst, " not in instruction list"_s}));
					}
					if ($instanceOf($Select, i)) {
						$var($InstructionHandleArray, targets, $nc(($cast($Select, i)))->getTargets());
						{
							$var($InstructionHandleArray, arr$, targets);
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($InstructionHandle, target, arr$->get(i$));
								{
									$assign(inst, $nc(target)->getInstruction());
									if (!contains(inst)) {
										$throwNew($ClassGenException, $$str({"Branch target of "_s, $($Const::getOpcodeName($nc(i)->getOpcode())), ":"_s, inst, " not in instruction list"_s}));
									}
								}
							}
						}
					}
					if (!($instanceOf($BranchHandle, ih))) {
						$throwNew($ClassGenException, $$str({"Branch instruction "_s, $($Const::getOpcodeName($nc(i)->getOpcode())), ":"_s, inst, " not contained in BranchHandle."_s}));
					}
				}
			}
		}
	}
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			$var($Instruction, i, ih->getInstruction());
			ih->setPosition(index);
			pos->set(count++, index);
			switch ($nc(i)->getOpcode()) {
			case $Const::JSR:
				{}
			case $Const::GOTO:
				{
					max_additional_bytes += 2;
					break;
				}
			case $Const::TABLESWITCH:
				{}
			case $Const::LOOKUPSWITCH:
				{
					max_additional_bytes += 3;
					break;
				}
			}
			index += i->getLength();
		}
	}
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, ih->getNext())) {
			additional_bytes += $nc(ih)->updatePosition(additional_bytes, max_additional_bytes);
		}
	}
	index = (count = 0);
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, ih->getNext())) {
			$var($Instruction, i, $nc(ih)->getInstruction());
			ih->setPosition(index);
			pos->set(count++, index);
			index += $nc(i)->getLength();
		}
	}
	$set(this, bytePositions, $new($ints, count));
	$System::arraycopy(pos, 0, this->bytePositions, 0, count);
}

$bytes* InstructionList::getByteCode() {
	$useLocalCurrentObjectStackCache();
	setPositions();
	$var($ByteArrayOutputStream, b, $new($ByteArrayOutputStream));
	$var($DataOutputStream, out, $new($DataOutputStream, b));
	try {
		{
			$var($InstructionHandle, ih, this->start);
			for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
				$var($Instruction, i, ih->getInstruction());
				$nc(i)->dump(out);
			}
		}
		out->flush();
	} catch ($IOException& e) {
		$nc($System::err)->println($of(e));
		return $new($bytes, 0);
	}
	return b->toByteArray();
}

$InstructionArray* InstructionList::getInstructions() {
	$useLocalCurrentObjectStackCache();
	$var($List, instructions, $new($ArrayList));
	try {
		$var($ByteSequence, bytes, $new($ByteSequence, $(getByteCode())));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					while (bytes->available() > 0) {
						instructions->add($($Instruction::readInstruction(bytes)));
					}
				} catch ($Throwable& t$) {
					try {
						bytes->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				bytes->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
		$throwNew($ClassGenException, $(e->toString()), e);
	}
	return $fcast($InstructionArray, instructions->toArray($$new($InstructionArray, instructions->size())));
}

$String* InstructionList::toString() {
	return toString(true);
}

$String* InstructionList::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			buf->append($(ih->toString(verbose)))->append("\n"_s);
		}
	}
	return buf->toString();
}

$Iterator* InstructionList::iterator() {
	return $new($InstructionList$1, this);
}

$InstructionHandleArray* InstructionList::getInstructionHandles() {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandleArray, ihs, $new($InstructionHandleArray, this->length));
	$var($InstructionHandle, ih, this->start);
	for (int32_t i = 0; i < this->length; ++i) {
		ihs->set(i, ih);
		$assign(ih, $nc(ih)->getNext());
	}
	return ihs;
}

$ints* InstructionList::getInstructionPositions() {
	return this->bytePositions;
}

InstructionList* InstructionList::copy() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $new($HashMap));
	$var(InstructionList, il, $new(InstructionList));
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			$var($Instruction, i, ih->getInstruction());
			$var($Instruction, c, $nc(i)->copy());
			if ($instanceOf($BranchInstruction, c)) {
				map->put(ih, $(il->append($cast($BranchInstruction, c))));
			} else {
				map->put(ih, $(il->append(c)));
			}
		}
	}
	$var($InstructionHandle, ih, this->start);
	$var($InstructionHandle, ch, il->start);
	while (ih != nullptr) {
		$var($Instruction, i, ih->getInstruction());
		$var($Instruction, c, $nc(ch)->getInstruction());
		if ($instanceOf($BranchInstruction, i)) {
			$var($BranchInstruction, bi, $cast($BranchInstruction, i));
			$var($BranchInstruction, bc, $cast($BranchInstruction, c));
			$var($InstructionHandle, itarget, $nc(bi)->getTarget());
			$nc(bc)->setTarget($cast($InstructionHandle, $(map->get(itarget))));
			if ($instanceOf($Select, bi)) {
				$var($InstructionHandleArray, itargets, $nc(($cast($Select, bi)))->getTargets());
				$var($InstructionHandleArray, ctargets, $nc(($cast($Select, bc)))->getTargets());
				for (int32_t j = 0; j < $nc(itargets)->length; ++j) {
					$nc(ctargets)->set(j, $cast($InstructionHandle, $(map->get(itargets->get(j)))));
				}
			}
		}
		$assign(ih, ih->getNext());
		$assign(ch, ch->getNext());
	}
	return il;
}

void InstructionList::replaceConstantPool($ConstantPoolGen* old_cp, $ConstantPoolGen* new_cp) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			$var($Instruction, i, ih->getInstruction());
			if ($instanceOf($CPInstruction, i)) {
				$var($CPInstruction, ci, $cast($CPInstruction, i));
				$var($Constant, c, $nc(old_cp)->getConstant($nc(ci)->getIndex()));
				$nc(ci)->setIndex($nc(new_cp)->addConstant(c, old_cp));
			}
		}
	}
}

void InstructionList::clear() {
	$set(this, start, ($set(this, end, nullptr)));
	this->length = 0;
}

void InstructionList::dispose() {
	{
		$var($InstructionHandle, ih, this->end);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getPrev())) {
			ih->dispose();
		}
	}
	clear();
}

$InstructionHandle* InstructionList::getStart() {
	return this->start;
}

$InstructionHandle* InstructionList::getEnd() {
	return this->end;
}

int32_t InstructionList::getLength() {
	return this->length;
}

int32_t InstructionList::size() {
	return this->length;
}

void InstructionList::redirectBranches($InstructionHandle* old_target, $InstructionHandle* new_target) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InstructionHandle, ih, this->start);
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			$var($Instruction, i, ih->getInstruction());
			if ($instanceOf($BranchInstruction, i)) {
				$var($BranchInstruction, b, $cast($BranchInstruction, i));
				$var($InstructionHandle, target, $nc(b)->getTarget());
				if (target == old_target) {
					b->setTarget(new_target);
				}
				if ($instanceOf($Select, b)) {
					$var($InstructionHandleArray, targets, $nc(($cast($Select, b)))->getTargets());
					for (int32_t j = 0; j < $nc(targets)->length; ++j) {
						if (targets->get(j) == old_target) {
							$nc(($cast($Select, b)))->setTarget(j, new_target);
						}
					}
				}
			}
		}
	}
}

void InstructionList::redirectLocalVariables($LocalVariableGenArray* lg, $InstructionHandle* old_target, $InstructionHandle* new_target) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LocalVariableGenArray, arr$, lg);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariableGen, element, arr$->get(i$));
			{
				$var($InstructionHandle, start, $nc(element)->getStart());
				$var($InstructionHandle, end, element->getEnd());
				if (start == old_target) {
					element->setStart(new_target);
				}
				if (end == old_target) {
					element->setEnd(new_target);
				}
			}
		}
	}
}

void InstructionList::redirectExceptionHandlers($CodeExceptionGenArray* exceptions, $InstructionHandle* old_target, $InstructionHandle* new_target) {
	$useLocalCurrentObjectStackCache();
	{
		$var($CodeExceptionGenArray, arr$, exceptions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CodeExceptionGen, exception, arr$->get(i$));
			{
				if ($nc(exception)->getStartPC() == old_target) {
					exception->setStartPC(new_target);
				}
				if ($nc(exception)->getEndPC() == old_target) {
					exception->setEndPC(new_target);
				}
				if ($nc(exception)->getHandlerPC() == old_target) {
					exception->setHandlerPC(new_target);
				}
			}
		}
	}
}

void InstructionList::addObserver($InstructionListObserver* o) {
	if (this->observers == nullptr) {
		$set(this, observers, $new($ArrayList));
	}
	$nc(this->observers)->add(o);
}

void InstructionList::removeObserver($InstructionListObserver* o) {
	if (this->observers != nullptr) {
		$nc(this->observers)->remove($of(o));
	}
}

void InstructionList::update() {
	$useLocalCurrentObjectStackCache();
	if (this->observers != nullptr) {
		{
			$var($Iterator, i$, $nc(this->observers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($InstructionListObserver, observer, $cast($InstructionListObserver, i$->next()));
				{
					$nc(observer)->notify(this);
				}
			}
		}
	}
}

InstructionList::InstructionList() {
}

$Class* InstructionList::load$($String* name, bool initialize) {
	$loadClass(InstructionList, name, initialize, &_InstructionList_ClassInfo_, allocate$InstructionList);
	return class$;
}

$Class* InstructionList::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com