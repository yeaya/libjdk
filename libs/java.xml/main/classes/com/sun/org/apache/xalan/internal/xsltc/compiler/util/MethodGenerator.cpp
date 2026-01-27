#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CodeExceptionGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/DLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldGenOrMethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IndexedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/RET.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TargetLostException.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/InternalError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MarkerInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$LocalVariableRegistry.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/OutlineableChunkEnd.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/OutlineableChunkStart.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/SlotAllocator.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_PRIVATE
#undef ACC_PUBLIC
#undef ACC_STATIC
#undef ACC_SUPER
#undef ALOAD_1
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOM_INDEX
#undef DOUBLE
#undef DUP
#undef END_ELEMENT_SIG
#undef FLOAT
#undef GOTO
#undef HANDLER_INDEX
#undef IFEQ
#undef IFGE
#undef IFGT
#undef IFLE
#undef IFLT
#undef IFNE
#undef IFNONNULL
#undef IFNULL
#undef IF_ACMPEQ
#undef IF_ACMPNE
#undef IF_ICMPEQ
#undef IF_ICMPGE
#undef IF_ICMPGT
#undef IF_ICMPLE
#undef IF_ICMPLT
#undef IF_ICMPNE
#undef INT
#undef INVALID_INDEX
#undef ITERATOR_INDEX
#undef JSR
#undef LONG
#undef LOOKUPSWITCH
#undef MAX_BRANCH_TARGET_OFFSET
#undef MAX_METHOD_SIZE
#undef MINIMUM_OUTLINEABLE_CHUNK_SIZE
#undef MIN_BRANCH_TARGET_OFFSET
#undef NEXT
#undef NEXT_SIG
#undef NODE_ITERATOR
#undef NODE_ITERATOR_SIG
#undef NOP
#undef OBJECT_CLASS
#undef OUTLINEABLECHUNKEND
#undef OUTLINEABLECHUNKSTART
#undef OUTLINE_ERR_DELETED_TARGET
#undef OUTLINE_ERR_METHOD_TOO_BIG
#undef OUTLINE_ERR_TRY_CATCH
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#undef POP
#undef RETURN
#undef SET_START_NODE
#undef SET_START_NODE_SIG
#undef SHORT
#undef START_ELEMENT_SIG
#undef STRING_SIG
#undef SWAP
#undef TABLESWITCH
#undef TARGET_METHOD_SIZE
#undef THIS
#undef TRANSLET_OUTPUT_INTERFACE
#undef VOID

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $InstructionTargeterArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionTargeter>;
using $LocalVariableGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $MethodGenerator$ChunkArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$Chunk>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $DLOAD = ::com::sun::org::apache::bcel::internal::generic::DLOAD;
using $DSTORE = ::com::sun::org::apache::bcel::internal::generic::DSTORE;
using $FLOAD = ::com::sun::org::apache::bcel::internal::generic::FLOAD;
using $FSTORE = ::com::sun::org::apache::bcel::internal::generic::FSTORE;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $ICONST = ::com::sun::org::apache::bcel::internal::generic::ICONST;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $IndexedInstruction = ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LLOAD = ::com::sun::org::apache::bcel::internal::generic::LLOAD;
using $LSTORE = ::com::sun::org::apache::bcel::internal::generic::LSTORE;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $RET = ::com::sun::org::apache::bcel::internal::generic::RET;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $TargetLostException = ::com::sun::org::apache::bcel::internal::generic::TargetLostException;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $InternalError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::InternalError;
using $MarkerInstruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction;
using $MethodGenerator$1 = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$1;
using $MethodGenerator$Chunk = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$Chunk;
using $MethodGenerator$LocalVariableRegistry = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$LocalVariableRegistry;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $OutlineableChunkEnd = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::OutlineableChunkEnd;
using $OutlineableChunkStart = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::OutlineableChunkStart;
using $SlotAllocator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::SlotAllocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _MethodGenerator_FieldInfo_[] = {
	{"INVALID_INDEX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MethodGenerator, INVALID_INDEX)},
	{"START_ELEMENT_SIG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodGenerator, START_ELEMENT_SIG)},
	{"END_ELEMENT_SIG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodGenerator, END_ELEMENT_SIG)},
	{"DOM_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, DOM_INDEX)},
	{"ITERATOR_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, ITERATOR_INDEX)},
	{"HANDLER_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, HANDLER_INDEX)},
	{"MAX_METHOD_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, MAX_METHOD_SIZE)},
	{"MAX_BRANCH_TARGET_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, MAX_BRANCH_TARGET_OFFSET)},
	{"MIN_BRANCH_TARGET_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, MIN_BRANCH_TARGET_OFFSET)},
	{"TARGET_METHOD_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, TARGET_METHOD_SIZE)},
	{"MINIMUM_OUTLINEABLE_CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodGenerator, MINIMUM_OUTLINEABLE_CHUNK_SIZE)},
	{"_iloadCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(MethodGenerator, _iloadCurrent)},
	{"_istoreCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(MethodGenerator, _istoreCurrent)},
	{"_astoreHandler", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _astoreHandler)},
	{"_aloadHandler", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _aloadHandler)},
	{"_astoreIterator", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _astoreIterator)},
	{"_aloadIterator", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _aloadIterator)},
	{"_aloadDom", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _aloadDom)},
	{"_astoreDom", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _astoreDom)},
	{"_startElement", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _startElement)},
	{"_endElement", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _endElement)},
	{"_startDocument", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _startDocument)},
	{"_endDocument", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _endDocument)},
	{"_attribute", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _attribute)},
	{"_uniqueAttribute", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _uniqueAttribute)},
	{"_namespace", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _namespace)},
	{"_setStartNode", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _setStartNode)},
	{"_reset", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _reset)},
	{"_nextNode", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MethodGenerator, _nextNode)},
	{"_slotAllocator", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/SlotAllocator;", nullptr, $PRIVATE, $field(MethodGenerator, _slotAllocator)},
	{"_allocatorInit", "Z", nullptr, $PRIVATE, $field(MethodGenerator, _allocatorInit)},
	{"_localVariableRegistry", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$LocalVariableRegistry;", nullptr, $PRIVATE, $field(MethodGenerator, _localVariableRegistry)},
	{"_preCompiled", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;>;", $PRIVATE, $field(MethodGenerator, _preCompiled)},
	{"m_totalChunks", "I", nullptr, $PRIVATE, $field(MethodGenerator, m_totalChunks)},
	{"m_openChunks", "I", nullptr, $PRIVATE, $field(MethodGenerator, m_openChunks)},
	{}
};

$MethodInfo _MethodGenerator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(MethodGenerator, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"addInstructionList", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, addInstructionList, void, $Pattern*, $InstructionList*)},
	{"addLocalVariable", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, addLocalVariable, $LocalVariableGen*, $String*, $Type*, $InstructionHandle*, $InstructionHandle*)},
	{"addLocalVariable2", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, addLocalVariable2, $LocalVariableGen*, $String*, $Type*, $InstructionHandle*)},
	{"attribute", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, attribute, $Instruction*)},
	{"endDocument", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, endDocument, $Instruction*)},
	{"endElement", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, endElement, $Instruction*)},
	{"getCandidateChunks", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;I)Ljava/util/List;", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;I)Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk;>;", $PRIVATE, $method(MethodGenerator, getCandidateChunks, $List*, $ClassGenerator*, int32_t)},
	{"getGeneratedMethods", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, 0, $virtualMethod(MethodGenerator, getGeneratedMethods, $MethodArray*, $ClassGenerator*)},
	{"getInstructionList", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, getInstructionList, $InstructionList*, $Pattern*)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, getLocalIndex, int32_t, $String*)},
	{"getLocalVariable", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, getLocalVariable, $LocalVariableGen*, $String*)},
	{"getLocalVariableRegistry", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$LocalVariableRegistry;", nullptr, $PRIVATE, $method(MethodGenerator, getLocalVariableRegistry, $MethodGenerator$LocalVariableRegistry*)},
	{"getThisMethod", "()Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PROTECTED, $virtualMethod(MethodGenerator, getThisMethod, $Method*)},
	{"loadContextNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, loadContextNode, $Instruction*)},
	{"loadCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, loadCurrentNode, $Instruction*)},
	{"loadDOM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, loadDOM, $Instruction*)},
	{"loadHandler", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, loadHandler, $Instruction*)},
	{"loadIterator", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, loadIterator, $Instruction*)},
	{"loadLocal", "(ILcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodGenerator, loadLocal, $Instruction*, int32_t, $Type*)},
	{"markChunkEnd", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, markChunkEnd, void)},
	{"markChunkStart", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, markChunkStart, void)},
	{"mergeAdjacentChunks", "([Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk;)Ljava/util/List;", "([Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk;)Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk;>;", $PRIVATE, $method(MethodGenerator, mergeAdjacentChunks, $List*, $MethodGenerator$ChunkArray*)},
	{"namespace", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, namespace$, $Instruction*)},
	{"nextNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, nextNode, $Instruction*)},
	{"offsetInLocalVariableGenRange", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;I)Z", nullptr, 0, $virtualMethod(MethodGenerator, offsetInLocalVariableGenRange, bool, $LocalVariableGen*, int32_t)},
	{"outline", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PRIVATE, $method(MethodGenerator, outline, $Method*, $InstructionHandle*, $InstructionHandle*, $String*, $ClassGenerator*)},
	{"outlineChunks", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;I)[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, outlineChunks, $MethodArray*, $ClassGenerator*, int32_t)},
	{"removeLocalVariable", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, removeLocalVariable, void, $LocalVariableGen*)},
	{"reset", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, reset, $Instruction*)},
	{"setMaxLocals", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, setMaxLocals, void)},
	{"setStartNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, setStartNode, $Instruction*)},
	{"startDocument", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, startDocument, $Instruction*)},
	{"startElement", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, startElement, $Instruction*)},
	{"storeContextNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, storeContextNode, $Instruction*)},
	{"storeCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, storeCurrentNode, $Instruction*)},
	{"storeDOM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, storeDOM, $Instruction*)},
	{"storeHandler", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, storeHandler, $Instruction*)},
	{"storeIterator", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MethodGenerator, storeIterator, $Instruction*)},
	{"storeLocal", "(ILcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodGenerator, storeLocal, $Instruction*, int32_t, $Type*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"uniqueAttribute", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(MethodGenerator, uniqueAttribute, $Instruction*)},
	{"widenConditionalBranchTargetOffsets", "()Z", nullptr, 0, $virtualMethod(MethodGenerator, widenConditionalBranchTargetOffsets, bool)},
	{}
};

$InnerClassInfo _MethodGenerator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$Chunk", "com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator", "Chunk", $PRIVATE},
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$LocalVariableRegistry", "com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator", "LocalVariableRegistry", $PROTECTED},
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	"com.sun.org.apache.bcel.internal.generic.MethodGen",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Constants",
	_MethodGenerator_FieldInfo_,
	_MethodGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_MethodGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$Chunk,com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$LocalVariableRegistry,com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$1"
};

$Object* allocate$MethodGenerator($Class* clazz) {
	return $of($alloc(MethodGenerator));
}

$String* MethodGenerator::toString() {
	 return this->$MethodGen::toString();
}

bool MethodGenerator::equals(Object$* obj) {
	 return this->$MethodGen::equals(obj);
}

int32_t MethodGenerator::hashCode() {
	 return this->$MethodGen::hashCode();
}

$Object* MethodGenerator::clone() {
	 return this->$MethodGen::clone();
}

void MethodGenerator::finalize() {
	this->$MethodGen::finalize();
}

$String* MethodGenerator::START_ELEMENT_SIG = nullptr;
$String* MethodGenerator::END_ELEMENT_SIG = nullptr;

void MethodGenerator::init$(int32_t access_flags, $Type* return_type, $TypeArray* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, $InstructionList* il, $ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$MethodGen::init$(access_flags, return_type, arg_types, arg_names, method_name, class_name, il, cpg);
	this->_allocatorInit = false;
	$set(this, _preCompiled, $new($HashMap));
	this->m_totalChunks = 0;
	this->m_openChunks = 0;
	$set(this, _astoreHandler, $new($ASTORE, MethodGenerator::HANDLER_INDEX));
	$set(this, _aloadHandler, $new($ALOAD, MethodGenerator::HANDLER_INDEX));
	$set(this, _astoreIterator, $new($ASTORE, MethodGenerator::ITERATOR_INDEX));
	$set(this, _aloadIterator, $new($ALOAD, MethodGenerator::ITERATOR_INDEX));
	$set(this, _aloadDom, $new($ALOAD, MethodGenerator::DOM_INDEX));
	$set(this, _astoreDom, $new($ASTORE, MethodGenerator::DOM_INDEX));
	$init($Constants);
	int32_t startElement = $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "startElement"_s, MethodGenerator::START_ELEMENT_SIG);
	$set(this, _startElement, $new($INVOKEINTERFACE, startElement, 2));
	int32_t endElement = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "endElement"_s, MethodGenerator::END_ELEMENT_SIG);
	$set(this, _endElement, $new($INVOKEINTERFACE, endElement, 2));
	int32_t attribute = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "addAttribute"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, ")V"_s}));
	$set(this, _attribute, $new($INVOKEINTERFACE, attribute, 3));
	int32_t uniqueAttribute = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "addUniqueAttribute"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, "I)V"_s}));
	$set(this, _uniqueAttribute, $new($INVOKEINTERFACE, uniqueAttribute, 4));
	int32_t namespace$ = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "namespaceAfterStartElement"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, ")V"_s}));
	$set(this, _namespace, $new($INVOKEINTERFACE, namespace$, 3));
	int32_t index = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "startDocument"_s, "()V"_s);
	$set(this, _startDocument, $new($INVOKEINTERFACE, index, 1));
	index = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "endDocument"_s, "()V"_s);
	$set(this, _endDocument, $new($INVOKEINTERFACE, index, 1));
	index = cpg->addInterfaceMethodref($Constants::NODE_ITERATOR, $Constants::SET_START_NODE, $Constants::SET_START_NODE_SIG);
	$set(this, _setStartNode, $new($INVOKEINTERFACE, index, 2));
	index = cpg->addInterfaceMethodref($Constants::NODE_ITERATOR, "reset"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
	$set(this, _reset, $new($INVOKEINTERFACE, index, 1));
	index = cpg->addInterfaceMethodref($Constants::NODE_ITERATOR, $Constants::NEXT, $Constants::NEXT_SIG);
	$set(this, _nextNode, $new($INVOKEINTERFACE, index, 1));
	$set(this, _slotAllocator, $new($SlotAllocator));
	$nc(this->_slotAllocator)->initialize($($nc($(getLocalVariableRegistry()))->getLocals()));
	this->_allocatorInit = true;
}

$LocalVariableGen* MethodGenerator::addLocalVariable($String* name, $Type* type, $InstructionHandle* start, $InstructionHandle* end) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableGen, lvg, nullptr);
	if (this->_allocatorInit) {
		$assign(lvg, addLocalVariable2(name, type, start));
	} else {
		$assign(lvg, $MethodGen::addLocalVariable(name, type, start, end));
		$nc($(getLocalVariableRegistry()))->registerLocalVariable(lvg);
	}
	return lvg;
}

$LocalVariableGen* MethodGenerator::addLocalVariable2($String* name, $Type* type, $InstructionHandle* start) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableGen, lvg, $MethodGen::addLocalVariable(name, type, $nc(this->_slotAllocator)->allocateSlot(type), start, nullptr));
	$nc($(getLocalVariableRegistry()))->registerLocalVariable(lvg);
	return lvg;
}

$MethodGenerator$LocalVariableRegistry* MethodGenerator::getLocalVariableRegistry() {
	if (this->_localVariableRegistry == nullptr) {
		$set(this, _localVariableRegistry, $new($MethodGenerator$LocalVariableRegistry, this));
	}
	return this->_localVariableRegistry;
}

bool MethodGenerator::offsetInLocalVariableGenRange($LocalVariableGen* lvg, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, lvgStart, $nc(lvg)->getStart());
	$var($InstructionHandle, lvgEnd, lvg->getEnd());
	if (lvgStart == nullptr) {
		$assign(lvgStart, $nc($(getInstructionList()))->getStart());
	}
	if (lvgEnd == nullptr) {
		$assign(lvgEnd, $nc($(getInstructionList()))->getEnd());
	}
	bool var$0 = ($nc(lvgStart)->getPosition() <= offset);
	if (var$0) {
		int32_t var$1 = $nc(lvgEnd)->getPosition();
		var$0 = (var$1 + $nc($(lvgEnd->getInstruction()))->getLength() >= offset);
	}
	return (var$0);
}

void MethodGenerator::removeLocalVariable($LocalVariableGen* lvg) {
	$nc(this->_slotAllocator)->releaseSlot(lvg);
	$nc($(getLocalVariableRegistry()))->removeByNameTracking(lvg);
	$MethodGen::removeLocalVariable(lvg);
}

$Instruction* MethodGenerator::loadDOM() {
	return this->_aloadDom;
}

$Instruction* MethodGenerator::storeDOM() {
	return this->_astoreDom;
}

$Instruction* MethodGenerator::storeHandler() {
	return this->_astoreHandler;
}

$Instruction* MethodGenerator::loadHandler() {
	return this->_aloadHandler;
}

$Instruction* MethodGenerator::storeIterator() {
	return this->_astoreIterator;
}

$Instruction* MethodGenerator::loadIterator() {
	return this->_aloadIterator;
}

$Instruction* MethodGenerator::setStartNode() {
	return this->_setStartNode;
}

$Instruction* MethodGenerator::reset() {
	return this->_reset;
}

$Instruction* MethodGenerator::nextNode() {
	return this->_nextNode;
}

$Instruction* MethodGenerator::startElement() {
	return this->_startElement;
}

$Instruction* MethodGenerator::endElement() {
	return this->_endElement;
}

$Instruction* MethodGenerator::startDocument() {
	return this->_startDocument;
}

$Instruction* MethodGenerator::endDocument() {
	return this->_endDocument;
}

$Instruction* MethodGenerator::attribute() {
	return this->_attribute;
}

$Instruction* MethodGenerator::uniqueAttribute() {
	return this->_uniqueAttribute;
}

$Instruction* MethodGenerator::namespace$() {
	return this->_namespace;
}

$Instruction* MethodGenerator::loadCurrentNode() {
	if (this->_iloadCurrent == nullptr) {
		int32_t idx = getLocalIndex("current"_s);
		if (idx > 0) {
			$set(this, _iloadCurrent, $new($ILOAD, idx));
		} else {
			$set(this, _iloadCurrent, $new($ICONST, 0));
		}
	}
	return this->_iloadCurrent;
}

$Instruction* MethodGenerator::storeCurrentNode() {
	return this->_istoreCurrent != nullptr ? this->_istoreCurrent : ($set(this, _istoreCurrent, $new($ISTORE, getLocalIndex("current"_s))));
}

$Instruction* MethodGenerator::loadContextNode() {
	return loadCurrentNode();
}

$Instruction* MethodGenerator::storeContextNode() {
	return storeCurrentNode();
}

int32_t MethodGenerator::getLocalIndex($String* name) {
	return $nc($(getLocalVariable(name)))->getIndex();
}

$LocalVariableGen* MethodGenerator::getLocalVariable($String* name) {
	return $nc($(getLocalVariableRegistry()))->lookUpByName(name);
}

void MethodGenerator::setMaxLocals() {
	int32_t maxLocals = $MethodGen::getMaxLocals();
	int32_t prevLocals = maxLocals;
	$var($LocalVariableGenArray, localVars, $MethodGen::getLocalVariables());
	if (localVars != nullptr) {
		if (localVars->length > maxLocals) {
			maxLocals = localVars->length;
		}
	}
	if (maxLocals < 5) {
		maxLocals = 5;
	}
	$MethodGen::setMaxLocals(maxLocals);
}

void MethodGenerator::addInstructionList($Pattern* pattern, $InstructionList* ilist) {
	$nc(this->_preCompiled)->put(pattern, ilist);
}

$InstructionList* MethodGenerator::getInstructionList($Pattern* pattern) {
	return $cast($InstructionList, $nc(this->_preCompiled)->get(pattern));
}

$List* MethodGenerator::getCandidateChunks($ClassGenerator* classGen, int32_t totalMethodSize) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, instructions, $nc($(getInstructionList()))->iterator());
	$var($List, candidateChunks, $new($ArrayList));
	$var($List, currLevelChunks, $new($ArrayList));
	$var($Stack, subChunkStack, $new($Stack));
	bool openChunkAtCurrLevel = false;
	bool firstInstruction = true;
	$var($InstructionHandle, currentHandle, nullptr);
	if (this->m_openChunks != 0) {
		$init($ErrorMsg);
		$var($String, msg, ($$new($ErrorMsg, $ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS))->toString());
		$throwNew($InternalError, msg);
	}
	do {
		$assign(currentHandle, $nc(instructions)->hasNext() ? $cast($InstructionHandle, $nc(instructions)->next()) : ($InstructionHandle*)nullptr);
		$var($Instruction, inst, (currentHandle != nullptr) ? $nc(currentHandle)->getInstruction() : ($Instruction*)nullptr);
		if (firstInstruction) {
			openChunkAtCurrLevel = true;
			currLevelChunks->add(currentHandle);
			firstInstruction = false;
		}
		if ($instanceOf($OutlineableChunkStart, inst)) {
			if (openChunkAtCurrLevel) {
				subChunkStack->push(currLevelChunks);
				$assign(currLevelChunks, $new($ArrayList));
			}
			openChunkAtCurrLevel = true;
			currLevelChunks->add(currentHandle);
		} else if (currentHandle == nullptr || $instanceOf($OutlineableChunkEnd, inst)) {
			$var($List, nestedSubChunks, nullptr);
			if (!openChunkAtCurrLevel) {
				$assign(nestedSubChunks, currLevelChunks);
				$assign(currLevelChunks, $cast($List, subChunkStack->pop()));
			}
			$var($InstructionHandle, chunkStart, $cast($InstructionHandle, currLevelChunks->get(currLevelChunks->size() - 1)));
			int32_t chunkEndPosition = (currentHandle != nullptr) ? currentHandle->getPosition() : totalMethodSize;
			int32_t chunkSize = chunkEndPosition - $nc(chunkStart)->getPosition();
			if (chunkSize <= MethodGenerator::TARGET_METHOD_SIZE) {
				currLevelChunks->add(currentHandle);
			} else {
				if (!openChunkAtCurrLevel) {
					int32_t childChunkCount = $nc(nestedSubChunks)->size() / 2;
					if (childChunkCount > 0) {
						$var($MethodGenerator$ChunkArray, childChunks, $new($MethodGenerator$ChunkArray, childChunkCount));
						for (int32_t i = 0; i < childChunkCount; ++i) {
							$var($InstructionHandle, start, $cast($InstructionHandle, nestedSubChunks->get(i * 2)));
							$var($InstructionHandle, end, $cast($InstructionHandle, nestedSubChunks->get(i * 2 + 1)));
							childChunks->set(i, $$new($MethodGenerator$Chunk, this, start, end));
						}
						$var($List, mergedChildChunks, mergeAdjacentChunks(childChunks));
						{
							$var($Iterator, i$, $nc(mergedChildChunks)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($MethodGenerator$Chunk, mergedChunk, $cast($MethodGenerator$Chunk, i$->next()));
								{
									int32_t mergedSize = $nc(mergedChunk)->getChunkSize();
									if (mergedSize >= MethodGenerator::MINIMUM_OUTLINEABLE_CHUNK_SIZE && mergedSize <= MethodGenerator::TARGET_METHOD_SIZE) {
										candidateChunks->add(mergedChunk);
									}
								}
							}
						}
					}
				}
				currLevelChunks->remove(currLevelChunks->size() - 1);
			}
			openChunkAtCurrLevel = (((int32_t)(currLevelChunks->size() & (uint32_t)1)) == 1);
		}
	} while (currentHandle != nullptr);
	return candidateChunks;
}

$List* MethodGenerator::mergeAdjacentChunks($MethodGenerator$ChunkArray* chunks) {
	$useLocalCurrentObjectStackCache();
	$var($ints, adjacencyRunStart, $new($ints, $nc(chunks)->length));
	$var($ints, adjacencyRunLength, $new($ints, chunks->length));
	$var($booleans, chunkWasMerged, $new($booleans, chunks->length));
	int32_t maximumRunOfChunks = 0;
	int32_t startOfCurrentRun = 0;
	int32_t numAdjacentRuns = 0;
	$var($List, mergedChunks, $new($ArrayList));
	startOfCurrentRun = 0;
	for (int32_t i = 1; i < chunks->length; ++i) {
		if (!$nc(chunks->get(i - 1))->isAdjacentTo(chunks->get(i))) {
			int32_t lengthOfRun = i - startOfCurrentRun;
			if (maximumRunOfChunks < lengthOfRun) {
				maximumRunOfChunks = lengthOfRun;
			}
			if (lengthOfRun > 1) {
				adjacencyRunLength->set(numAdjacentRuns, lengthOfRun);
				adjacencyRunStart->set(numAdjacentRuns, startOfCurrentRun);
				++numAdjacentRuns;
			}
			startOfCurrentRun = i;
		}
	}
	if (chunks->length - startOfCurrentRun > 1) {
		int32_t lengthOfRun = chunks->length - startOfCurrentRun;
		if (maximumRunOfChunks < lengthOfRun) {
			maximumRunOfChunks = lengthOfRun;
		}
		adjacencyRunLength->set(numAdjacentRuns, chunks->length - startOfCurrentRun);
		adjacencyRunStart->set(numAdjacentRuns, startOfCurrentRun);
		++numAdjacentRuns;
	}
	for (int32_t numToMerge = maximumRunOfChunks; numToMerge > 1; --numToMerge) {
		for (int32_t run = 0; run < numAdjacentRuns; ++run) {
			int32_t runStart = adjacencyRunStart->get(run);
			int32_t runEnd = runStart + adjacencyRunLength->get(run) - 1;
			bool foundChunksToMerge = false;
			for (int32_t mergeStart = runStart; mergeStart + numToMerge - 1 <= runEnd && !foundChunksToMerge; ++mergeStart) {
				int32_t mergeEnd = mergeStart + numToMerge - 1;
				int32_t mergeSize = 0;
				for (int32_t j = mergeStart; j <= mergeEnd; ++j) {
					mergeSize = mergeSize + $nc(chunks->get(j))->getChunkSize();
				}
				if (mergeSize <= MethodGenerator::TARGET_METHOD_SIZE) {
					foundChunksToMerge = true;
					for (int32_t j = mergeStart; j <= mergeEnd; ++j) {
						chunkWasMerged->set(j, true);
					}
					$var($InstructionHandle, var$0, $nc(chunks->get(mergeStart))->getChunkStart());
					mergedChunks->add($$new($MethodGenerator$Chunk, this, var$0, $($nc(chunks->get(mergeEnd))->getChunkEnd())));
					adjacencyRunLength->set(run, adjacencyRunStart->get(run) - mergeStart);
					int32_t trailingRunLength = runEnd - mergeEnd;
					if (trailingRunLength >= 2) {
						adjacencyRunStart->set(numAdjacentRuns, mergeEnd + 1);
						adjacencyRunLength->set(numAdjacentRuns, trailingRunLength);
						++numAdjacentRuns;
					}
				}
			}
		}
	}
	for (int32_t i = 0; i < chunks->length; ++i) {
		if (!chunkWasMerged->get(i)) {
			mergedChunks->add(chunks->get(i));
		}
	}
	return mergedChunks;
}

$MethodArray* MethodGenerator::outlineChunks($ClassGenerator* classGen, int32_t originalMethodSize) {
	$useLocalCurrentObjectStackCache();
	$var($List, methodsOutlined, $new($ArrayList));
	int32_t currentMethodSize = originalMethodSize;
	int32_t outlinedCount = 0;
	bool moreMethodsOutlined = false;
	$var($String, originalMethodName, getName());
	if ($nc(originalMethodName)->equals("<init>"_s)) {
		$assign(originalMethodName, "$lt$init$gt$"_s);
	} else if (originalMethodName->equals("<clinit>"_s)) {
		$assign(originalMethodName, "$lt$clinit$gt$"_s);
	}
	do {
		$var($List, candidateChunks, getCandidateChunks(classGen, currentMethodSize));
		$Collections::sort(candidateChunks);
		moreMethodsOutlined = false;
		for (int32_t i = $nc(candidateChunks)->size() - 1; i >= 0 && currentMethodSize > MethodGenerator::TARGET_METHOD_SIZE; --i) {
			$var($MethodGenerator$Chunk, chunkToOutline, $cast($MethodGenerator$Chunk, candidateChunks->get(i)));
			$var($InstructionHandle, var$0, $nc(chunkToOutline)->getChunkStart());
			methodsOutlined->add($(outline(var$0, $(chunkToOutline->getChunkEnd()), $$str({originalMethodName, "$outline$"_s, $$str(outlinedCount)}), classGen)));
			++outlinedCount;
			moreMethodsOutlined = true;
			$var($InstructionList, il, getInstructionList());
			$var($InstructionHandle, lastInst, $nc(il)->getEnd());
			il->setPositions();
			int32_t var$1 = $nc(lastInst)->getPosition();
			currentMethodSize = var$1 + $nc($(lastInst->getInstruction()))->getLength();
		}
	} while (moreMethodsOutlined && currentMethodSize > MethodGenerator::TARGET_METHOD_SIZE);
	if (currentMethodSize > MethodGenerator::MAX_METHOD_SIZE) {
		$init($ErrorMsg);
		$var($String, msg, ($$new($ErrorMsg, $ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG))->toString());
		$throwNew($InternalError, msg);
	}
	$var($MethodArray, methodsArr, $new($MethodArray, methodsOutlined->size() + 1));
	methodsOutlined->toArray(methodsArr);
	int32_t var$2 = methodsOutlined->size();
	methodsArr->set(var$2, $(getThisMethod()));
	return methodsArr;
}

$Method* MethodGenerator::outline($InstructionHandle* first, $InstructionHandle* last, $String* outlinedMethodName, $ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getExceptionHandlers()))->length != 0) {
		$init($ErrorMsg);
		$var($String, msg, ($$new($ErrorMsg, $ErrorMsg::OUTLINE_ERR_TRY_CATCH))->toString());
		$throwNew($InternalError, msg);
	}
	int32_t outlineChunkStartOffset = $nc(first)->getPosition();
	int32_t var$0 = $nc(last)->getPosition();
	int32_t outlineChunkEndOffset = var$0 + $nc($(last->getInstruction()))->getLength();
	$var($ConstantPoolGen, cpg, getConstantPool());
	$var($InstructionList, newIL, $new($InstructionList));
	$var($XSLTC, xsltc, $nc($($nc(classGen)->getParser()))->getXSLTC());
	$var($String, argTypeName, $nc(xsltc)->getHelperClassName());
	$var($TypeArray, argTypes, $new($TypeArray, {$(($$new($ObjectType, argTypeName))->toJCType())}));
	$var($String, argName, "copyLocals"_s);
	$var($StringArray, argNames, $new($StringArray, {argName}));
	int32_t methodAttributes = $Constants::ACC_PRIVATE | $Constants::ACC_FINAL;
	bool isStaticMethod = ((int32_t)(getAccessFlags() & (uint32_t)$Constants::ACC_STATIC)) != 0;
	if (isStaticMethod) {
		methodAttributes = methodAttributes | $Constants::ACC_STATIC;
	}
	$init($Type);
	$var(MethodGenerator, outlinedMethodGen, $new(MethodGenerator, methodAttributes, $Type::VOID, argTypes, argNames, outlinedMethodName, $(getClassName()), newIL, cpg));
	$init($Constants);
	$var($ClassGenerator, copyAreaCG, $new($MethodGenerator$1, this, argTypeName, $Constants::OBJECT_CLASS, $$str({argTypeName, ".java"_s}), ($Constants::ACC_FINAL | $Constants::ACC_PUBLIC) | $Constants::ACC_SUPER, nullptr, $(classGen->getStylesheet())));
	$var($ConstantPoolGen, copyAreaCPG, copyAreaCG->getConstantPool());
	copyAreaCG->addEmptyConstructor($Constants::ACC_PUBLIC);
	int32_t copyAreaFieldCount = 0;
	$var($InstructionHandle, limit, last->getNext());
	$var($InstructionList, oldMethCopyInIL, $new($InstructionList));
	$var($InstructionList, oldMethCopyOutIL, $new($InstructionList));
	$var($InstructionList, newMethCopyInIL, $new($InstructionList));
	$var($InstructionList, newMethCopyOutIL, $new($InstructionList));
	$var($InstructionHandle, outlinedMethodCallSetup, oldMethCopyInIL->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass(argTypeName)))));
	$init($InstructionConst);
	oldMethCopyInIL->append(static_cast<$Instruction*>($InstructionConst::DUP));
	oldMethCopyInIL->append(static_cast<$Instruction*>($InstructionConst::DUP));
	oldMethCopyInIL->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref(argTypeName, "<init>"_s, "()V"_s))));
	$var($InstructionHandle, outlinedMethodRef, nullptr);
	if (isStaticMethod) {
		$var($String, var$1, classGen->getClassName());
		$var($String, var$2, outlinedMethodName);
		$assign(outlinedMethodRef, oldMethCopyOutIL->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref(var$1, var$2, $(outlinedMethodGen->getSignature()))))));
	} else {
		oldMethCopyOutIL->append(static_cast<$Instruction*>($InstructionConst::THIS));
		oldMethCopyOutIL->append(static_cast<$Instruction*>($InstructionConst::SWAP));
		$var($String, var$3, classGen->getClassName());
		$var($String, var$4, outlinedMethodName);
		$assign(outlinedMethodRef, oldMethCopyOutIL->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref(var$3, var$4, $(outlinedMethodGen->getSignature()))))));
	}
	bool chunkStartTargetMappingsPending = false;
	$var($InstructionHandle, pendingTargetMappingHandle, nullptr);
	$var($InstructionHandle, lastCopyHandle, nullptr);
	$var($HashMap, targetMap, $new($HashMap));
	$var($HashMap, localVarMap, $new($HashMap));
	$var($HashMap, revisedLocalVarStart, $new($HashMap));
	$var($HashMap, revisedLocalVarEnd, $new($HashMap));
	{
		$var($InstructionHandle, ih, first);
		for (; ih != limit; $assign(ih, ih->getNext())) {
			$var($Instruction, inst, $nc(ih)->getInstruction());
			if ($instanceOf($MarkerInstruction, inst)) {
				if (ih->hasTargeters()) {
					if ($instanceOf($OutlineableChunkEnd, inst)) {
						targetMap->put(ih, lastCopyHandle);
					} else if (!chunkStartTargetMappingsPending) {
						chunkStartTargetMappingsPending = true;
						$assign(pendingTargetMappingHandle, ih);
					}
				}
			} else {
				$var($Instruction, c, $nc(inst)->copy());
				if ($instanceOf($BranchInstruction, c)) {
					$assign(lastCopyHandle, newIL->append($cast($BranchInstruction, c)));
				} else {
					$assign(lastCopyHandle, newIL->append(c));
				}
				if ($instanceOf($LocalVariableInstruction, c) || $instanceOf($RET, c)) {
					$var($IndexedInstruction, lvi, $cast($IndexedInstruction, c));
					int32_t oldLocalVarIndex = $nc(lvi)->getIndex();
					$var($LocalVariableGen, oldLVG, $nc($(getLocalVariableRegistry()))->lookupRegisteredLocalVariable(oldLocalVarIndex, ih->getPosition()));
					$var($LocalVariableGen, newLVG, $cast($LocalVariableGen, localVarMap->get(oldLVG)));
					if (localVarMap->get(oldLVG) == nullptr) {
						bool copyInLocalValue = offsetInLocalVariableGenRange(oldLVG, (outlineChunkStartOffset != 0) ? outlineChunkStartOffset - 1 : 0);
						bool copyOutLocalValue = offsetInLocalVariableGenRange(oldLVG, outlineChunkEndOffset + 1);
						if (copyInLocalValue || copyOutLocalValue) {
							$var($String, varName, $nc(oldLVG)->getName());
							$var($Type, varType, oldLVG->getType());
							$assign(newLVG, outlinedMethodGen->addLocalVariable(varName, varType, nullptr, nullptr));
							int32_t newLocalVarIndex = $nc(newLVG)->getIndex();
							$var($String, varSignature, $nc(varType)->getSignature());
							localVarMap->put(oldLVG, newLVG);
							++copyAreaFieldCount;
							$var($String, copyAreaFieldName, $str({"field"_s, $$str(copyAreaFieldCount)}));
							int32_t var$5 = $Constants::ACC_PUBLIC;
							int32_t var$6 = $nc(copyAreaCPG)->addUtf8(copyAreaFieldName);
							int32_t var$7 = copyAreaCPG->addUtf8(varSignature);
							copyAreaCG->addField($$new($Field, var$5, var$6, var$7, nullptr, $(copyAreaCPG->getConstantPool())));
							int32_t fieldRef = $nc(cpg)->addFieldref(argTypeName, copyAreaFieldName, varSignature);
							if (copyInLocalValue) {
								oldMethCopyInIL->append(static_cast<$Instruction*>($InstructionConst::DUP));
								$var($InstructionHandle, copyInLoad, oldMethCopyInIL->append($(loadLocal(oldLocalVarIndex, varType))));
								oldMethCopyInIL->append(static_cast<$Instruction*>($$new($PUTFIELD, fieldRef)));
								if (!copyOutLocalValue) {
									revisedLocalVarEnd->put(oldLVG, copyInLoad);
								}
								newMethCopyInIL->append(static_cast<$Instruction*>($InstructionConst::ALOAD_1));
								newMethCopyInIL->append(static_cast<$Instruction*>($$new($GETFIELD, fieldRef)));
								newMethCopyInIL->append($(storeLocal(newLocalVarIndex, varType)));
							}
							if (copyOutLocalValue) {
								newMethCopyOutIL->append(static_cast<$Instruction*>($InstructionConst::ALOAD_1));
								newMethCopyOutIL->append($(loadLocal(newLocalVarIndex, varType)));
								newMethCopyOutIL->append(static_cast<$Instruction*>($$new($PUTFIELD, fieldRef)));
								oldMethCopyOutIL->append(static_cast<$Instruction*>($InstructionConst::DUP));
								oldMethCopyOutIL->append(static_cast<$Instruction*>($$new($GETFIELD, fieldRef)));
								$var($InstructionHandle, copyOutStore, oldMethCopyOutIL->append($(storeLocal(oldLocalVarIndex, varType))));
								if (!copyInLocalValue) {
									revisedLocalVarStart->put(oldLVG, copyOutStore);
								}
							}
						}
					}
				}
				if (ih->hasTargeters()) {
					targetMap->put(ih, lastCopyHandle);
				}
				if (chunkStartTargetMappingsPending) {
					do {
						targetMap->put(pendingTargetMappingHandle, lastCopyHandle);
						$assign(pendingTargetMappingHandle, $nc(pendingTargetMappingHandle)->getNext());
					} while (pendingTargetMappingHandle != ih);
					chunkStartTargetMappingsPending = false;
				}
			}
		}
	}
	$var($InstructionHandle, ih, first);
	$var($InstructionHandle, ch, newIL->getStart());
	while (ch != nullptr) {
		$var($Instruction, i, $nc(ih)->getInstruction());
		$var($Instruction, c, ch->getInstruction());
		if ($instanceOf($BranchInstruction, i)) {
			$var($BranchInstruction, bc, $cast($BranchInstruction, c));
			$var($BranchInstruction, bi, $cast($BranchInstruction, i));
			$var($InstructionHandle, itarget, $nc(bi)->getTarget());
			$var($InstructionHandle, newTarget, $cast($InstructionHandle, targetMap->get(itarget)));
			$nc(bc)->setTarget(newTarget);
			if ($instanceOf($Select, bi)) {
				$var($InstructionHandleArray, itargets, $nc(($cast($Select, bi)))->getTargets());
				$var($InstructionHandleArray, ctargets, $nc(($cast($Select, bc)))->getTargets());
				for (int32_t j = 0; j < $nc(itargets)->length; ++j) {
					$nc(ctargets)->set(j, $cast($InstructionHandle, $(targetMap->get(itargets->get(j)))));
				}
			}
		} else if ($instanceOf($LocalVariableInstruction, i) || $instanceOf($RET, i)) {
			$var($IndexedInstruction, lvi, $cast($IndexedInstruction, c));
			int32_t oldLocalVarIndex = $nc(lvi)->getIndex();
			$var($LocalVariableGen, oldLVG, $nc($(getLocalVariableRegistry()))->lookupRegisteredLocalVariable(oldLocalVarIndex, ih->getPosition()));
			$var($LocalVariableGen, newLVG, $cast($LocalVariableGen, localVarMap->get(oldLVG)));
			int32_t newLocalVarIndex = 0;
			if (newLVG == nullptr) {
				$var($String, varName, $nc(oldLVG)->getName());
				$var($Type, varType, oldLVG->getType());
				$assign(newLVG, outlinedMethodGen->addLocalVariable(varName, varType, nullptr, nullptr));
				newLocalVarIndex = $nc(newLVG)->getIndex();
				localVarMap->put(oldLVG, newLVG);
				revisedLocalVarStart->put(oldLVG, outlinedMethodRef);
				revisedLocalVarEnd->put(oldLVG, outlinedMethodRef);
			} else {
				newLocalVarIndex = $nc(newLVG)->getIndex();
			}
			lvi->setIndex(newLocalVarIndex);
		}
		if (ih->hasTargeters()) {
			$var($InstructionTargeterArray, targeters, ih->getTargeters());
			for (int32_t idx = 0; idx < $nc(targeters)->length; ++idx) {
				$var($InstructionTargeter, targeter, targeters->get(idx));
				if ($instanceOf($LocalVariableGen, targeter) && $nc(($cast($LocalVariableGen, targeter)))->getEnd() == ih) {
					$var($LocalVariableGen, newLVG, $cast($LocalVariableGen, localVarMap->get(targeter)));
					if (newLVG != nullptr) {
						outlinedMethodGen->removeLocalVariable(newLVG);
					}
				}
			}
		}
		if (!($instanceOf($MarkerInstruction, i))) {
			$assign(ch, ch->getNext());
		}
		$assign(ih, ih->getNext());
	}
	oldMethCopyOutIL->append(static_cast<$Instruction*>($InstructionConst::POP));
	{
		$var($Iterator, i$, $nc($(revisedLocalVarStart->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, lvgRangeStartPair, $cast($Map$Entry, i$->next()));
			{
				$var($LocalVariableGen, lvg, $cast($LocalVariableGen, $nc(lvgRangeStartPair)->getKey()));
				$var($InstructionHandle, startInst, $cast($InstructionHandle, lvgRangeStartPair->getValue()));
				$nc(lvg)->setStart(startInst);
			}
		}
	}
	{
		$var($Iterator, i$, $nc($(revisedLocalVarEnd->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, lvgRangeEndPair, $cast($Map$Entry, i$->next()));
			{
				$var($LocalVariableGen, lvg, $cast($LocalVariableGen, $nc(lvgRangeEndPair)->getKey()));
				$var($InstructionHandle, endInst, $cast($InstructionHandle, lvgRangeEndPair->getValue()));
				$nc(lvg)->setEnd(endInst);
			}
		}
	}
	xsltc->dumpClass($(copyAreaCG->getJavaClass()));
	$var($InstructionList, oldMethodIL, getInstructionList());
	$nc(oldMethodIL)->insert(first, oldMethCopyInIL);
	oldMethodIL->insert(first, oldMethCopyOutIL);
	newIL->insert(newMethCopyInIL);
	newIL->append(newMethCopyOutIL);
	newIL->append(static_cast<$Instruction*>($InstructionConst::RETURN));
	try {
		oldMethodIL->delete$(first, last);
	} catch ($TargetLostException& e) {
		$var($InstructionHandleArray, targets, e->getTargets());
		for (int32_t i = 0; i < $nc(targets)->length; ++i) {
			$var($InstructionHandle, lostTarget, targets->get(i));
			$var($InstructionTargeterArray, targeters, $nc(lostTarget)->getTargeters());
			for (int32_t j = 0; j < $nc(targeters)->length; ++j) {
				if ($instanceOf($LocalVariableGen, targeters->get(j))) {
					$var($LocalVariableGen, lvgTargeter, $cast($LocalVariableGen, targeters->get(j)));
					if ($nc(lvgTargeter)->getStart() == lostTarget) {
						lvgTargeter->setStart(outlinedMethodRef);
					}
					if ($nc(lvgTargeter)->getEnd() == lostTarget) {
						lvgTargeter->setEnd(outlinedMethodRef);
					}
				} else {
					$nc(targeters->get(j))->updateTarget(lostTarget, outlinedMethodCallSetup);
				}
			}
		}
	}
	$var($StringArray, exceptions, getExceptions());
	for (int32_t i = 0; i < $nc(exceptions)->length; ++i) {
		outlinedMethodGen->addException(exceptions->get(i));
	}
	return outlinedMethodGen->getThisMethod();
}

$Instruction* MethodGenerator::loadLocal(int32_t index, $Type* type) {
	$init(MethodGenerator);
	$init($Type);
	if ($equals(type, $Type::BOOLEAN)) {
		return $new($ILOAD, index);
	} else {
		if ($equals(type, $Type::INT)) {
			return $new($ILOAD, index);
		} else {
			if ($equals(type, $Type::SHORT)) {
				return $new($ILOAD, index);
			} else {
				if ($equals(type, $Type::LONG)) {
					return $new($LLOAD, index);
				} else {
					if ($equals(type, $Type::BYTE)) {
						return $new($ILOAD, index);
					} else {
						if ($equals(type, $Type::CHAR)) {
							return $new($ILOAD, index);
						} else {
							if ($equals(type, $Type::FLOAT)) {
								return $new($FLOAD, index);
							} else {
								if ($equals(type, $Type::DOUBLE)) {
									return $new($DLOAD, index);
								} else {
									return $new($ALOAD, index);
								}
							}
						}
					}
				}
			}
		}
	}
}

$Instruction* MethodGenerator::storeLocal(int32_t index, $Type* type) {
	$init(MethodGenerator);
	$init($Type);
	if ($equals(type, $Type::BOOLEAN)) {
		return $new($ISTORE, index);
	} else {
		if ($equals(type, $Type::INT)) {
			return $new($ISTORE, index);
		} else {
			if ($equals(type, $Type::SHORT)) {
				return $new($ISTORE, index);
			} else {
				if ($equals(type, $Type::LONG)) {
					return $new($LSTORE, index);
				} else {
					if ($equals(type, $Type::BYTE)) {
						return $new($ISTORE, index);
					} else {
						if ($equals(type, $Type::CHAR)) {
							return $new($ISTORE, index);
						} else {
							if ($equals(type, $Type::FLOAT)) {
								return $new($FSTORE, index);
							} else {
								if ($equals(type, $Type::DOUBLE)) {
									return $new($DSTORE, index);
								} else {
									return $new($ASTORE, index);
								}
							}
						}
					}
				}
			}
		}
	}
}

void MethodGenerator::markChunkStart() {
	$init($OutlineableChunkStart);
	$nc($(getInstructionList()))->append($OutlineableChunkStart::OUTLINEABLECHUNKSTART);
	++this->m_totalChunks;
	++this->m_openChunks;
}

void MethodGenerator::markChunkEnd() {
	$useLocalCurrentObjectStackCache();
	$init($OutlineableChunkEnd);
	$nc($(getInstructionList()))->append($OutlineableChunkEnd::OUTLINEABLECHUNKEND);
	--this->m_openChunks;
	if (this->m_openChunks < 0) {
		$init($ErrorMsg);
		$var($String, msg, ($$new($ErrorMsg, $ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS))->toString());
		$throwNew($InternalError, msg);
	}
}

$MethodArray* MethodGenerator::getGeneratedMethods($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($MethodArray, generatedMethods, nullptr);
	$var($InstructionList, il, getInstructionList());
	$var($InstructionHandle, last, $nc(il)->getEnd());
	il->setPositions();
	int32_t var$0 = $nc(last)->getPosition();
	int32_t instructionListSize = var$0 + $nc($(last->getInstruction()))->getLength();
	if (instructionListSize > MethodGenerator::MAX_BRANCH_TARGET_OFFSET) {
		bool ilChanged = widenConditionalBranchTargetOffsets();
		if (ilChanged) {
			il->setPositions();
			$assign(last, il->getEnd());
			int32_t var$1 = $nc(last)->getPosition();
			instructionListSize = var$1 + $nc($(last->getInstruction()))->getLength();
		}
	}
	if (instructionListSize > MethodGenerator::MAX_METHOD_SIZE) {
		$assign(generatedMethods, outlineChunks(classGen, instructionListSize));
	} else {
		$assign(generatedMethods, $new($MethodArray, {$(getThisMethod())}));
	}
	return generatedMethods;
}

$Method* MethodGenerator::getThisMethod() {
	stripAttributes(true);
	setMaxLocals();
	setMaxStack();
	removeNOPs();
	return getMethod();
}

bool MethodGenerator::widenConditionalBranchTargetOffsets() {
	$useLocalCurrentObjectStackCache();
	bool ilChanged = false;
	int32_t maxOffsetChange = 0;
	$var($InstructionList, il, getInstructionList());
	{
		$var($InstructionHandle, ih, $nc(il)->getStart());
		for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
			$var($Instruction, inst, ih->getInstruction());
			switch ($nc(inst)->getOpcode()) {
			case $Const::GOTO:
				{}
			case $Const::JSR:
				{
					maxOffsetChange = maxOffsetChange + 2;
					break;
				}
			case $Const::TABLESWITCH:
				{}
			case $Const::LOOKUPSWITCH:
				{
					maxOffsetChange = maxOffsetChange + 3;
					break;
				}
			case $Const::IF_ACMPEQ:
				{}
			case $Const::IF_ACMPNE:
				{}
			case $Const::IF_ICMPEQ:
				{}
			case $Const::IF_ICMPGE:
				{}
			case $Const::IF_ICMPGT:
				{}
			case $Const::IF_ICMPLE:
				{}
			case $Const::IF_ICMPLT:
				{}
			case $Const::IF_ICMPNE:
				{}
			case $Const::IFEQ:
				{}
			case $Const::IFGE:
				{}
			case $Const::IFGT:
				{}
			case $Const::IFLE:
				{}
			case $Const::IFLT:
				{}
			case $Const::IFNE:
				{}
			case $Const::IFNONNULL:
				{}
			case $Const::IFNULL:
				{
					maxOffsetChange = maxOffsetChange + 5;
					break;
				}
			}
		}
	}
	{
		$var($InstructionHandle, ih, il->getStart());
		for (; ih != nullptr; $assign(ih, ih->getNext())) {
			$var($Instruction, inst, $nc(ih)->getInstruction());
			if ($instanceOf($IfInstruction, inst)) {
				$var($IfInstruction, oldIfInst, $cast($IfInstruction, inst));
				$var($BranchHandle, oldIfHandle, $cast($BranchHandle, ih));
				$var($InstructionHandle, target, $nc(oldIfInst)->getTarget());
				int32_t var$0 = $nc(target)->getPosition();
				int32_t relativeTargetOffset = var$0 - oldIfHandle->getPosition();
				if ((relativeTargetOffset - maxOffsetChange < MethodGenerator::MIN_BRANCH_TARGET_OFFSET) || (relativeTargetOffset + maxOffsetChange > MethodGenerator::MAX_BRANCH_TARGET_OFFSET)) {
					$var($InstructionHandle, nextHandle, oldIfHandle->getNext());
					$var($IfInstruction, invertedIfInst, oldIfInst->negate());
					$var($BranchHandle, invertedIfHandle, il->append(static_cast<$InstructionHandle*>(oldIfHandle), static_cast<$BranchInstruction*>(invertedIfInst)));
					$var($BranchHandle, gotoHandle, il->append(static_cast<$InstructionHandle*>(invertedIfHandle), static_cast<$BranchInstruction*>($$new($GOTO, target))));
					if (nextHandle == nullptr) {
						$init($InstructionConst);
						$assign(nextHandle, il->append(static_cast<$InstructionHandle*>(gotoHandle), $InstructionConst::NOP));
					}
					$nc(invertedIfHandle)->updateTarget(target, nextHandle);
					if (oldIfHandle->hasTargeters()) {
						$var($InstructionTargeterArray, targeters, oldIfHandle->getTargeters());
						for (int32_t i = 0; i < $nc(targeters)->length; ++i) {
							$var($InstructionTargeter, targeter, targeters->get(i));
							if ($instanceOf($LocalVariableGen, targeter)) {
								$var($LocalVariableGen, lvg, $cast($LocalVariableGen, targeter));
								if ($equals($nc(lvg)->getStart(), oldIfHandle)) {
									lvg->setStart(invertedIfHandle);
								} else if ($equals(lvg->getEnd(), oldIfHandle)) {
									lvg->setEnd(gotoHandle);
								}
							} else {
								$nc(targeter)->updateTarget(oldIfHandle, invertedIfHandle);
							}
						}
					}
					try {
						il->delete$(static_cast<$InstructionHandle*>(oldIfHandle));
					} catch ($TargetLostException& tle) {
						$init($ErrorMsg);
						$var($String, msg, $$new($ErrorMsg, $ErrorMsg::OUTLINE_ERR_DELETED_TARGET, $($of(tle->getMessage())))->toString());
						$throwNew($InternalError, msg);
					}
					$assign(ih, gotoHandle);
					ilChanged = true;
				}
			}
		}
	}
	return ilChanged;
}

MethodGenerator::MethodGenerator() {
}

void clinit$MethodGenerator($Class* class$) {
	$init($Constants);
	$assignStatic(MethodGenerator::START_ELEMENT_SIG, $str({"("_s, $Constants::STRING_SIG, ")V"_s}));
	$assignStatic(MethodGenerator::END_ELEMENT_SIG, MethodGenerator::START_ELEMENT_SIG);
}

$Class* MethodGenerator::load$($String* name, bool initialize) {
	$loadClass(MethodGenerator, name, initialize, &_MethodGenerator_ClassInfo_, clinit$MethodGenerator, allocate$MethodGenerator);
	return class$;
}

$Class* MethodGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com