#include <com/sun/org/apache/bcel/internal/Const.h>

#include <java/lang/Iterable.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACCESS_NAMES
#undef ACCESS_NAMES_LENGTH
#undef ACC_ABSTRACT
#undef ACC_ANNOTATION
#undef ACC_BRIDGE
#undef ACC_ENUM
#undef ACC_FINAL
#undef ACC_INTERFACE
#undef ACC_MANDATED
#undef ACC_MODULE
#undef ACC_NATIVE
#undef ACC_OPEN
#undef ACC_PRIVATE
#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ACC_STATIC
#undef ACC_STATIC_PHASE
#undef ACC_STRICT
#undef ACC_SUPER
#undef ACC_SYNCHRONIZED
#undef ACC_SYNTHETIC
#undef ACC_TRANSIENT
#undef ACC_TRANSITIVE
#undef ACC_VARARGS
#undef ACC_VOLATILE
#undef ACONST_NULL
#undef ALOAD
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef ALOAD_3
#undef ANEWARRAY
#undef ANEWARRAY_QUICK
#undef APPEND_FRAME
#undef APPEND_FRAME_MAX
#undef ARETURN
#undef ARRAYLENGTH
#undef ASTORE
#undef ASTORE_0
#undef ASTORE_1
#undef ASTORE_2
#undef ASTORE_3
#undef ATHROW
#undef ATTRIBUTE_NAMES
#undef ATTR_ANNOTATION_DEFAULT
#undef ATTR_BOOTSTRAP_METHODS
#undef ATTR_CODE
#undef ATTR_CONSTANT_VALUE
#undef ATTR_DEPRECATED
#undef ATTR_ENCLOSING_METHOD
#undef ATTR_EXCEPTIONS
#undef ATTR_INNER_CLASSES
#undef ATTR_LINE_NUMBER_TABLE
#undef ATTR_LOCAL_VARIABLE_TABLE
#undef ATTR_LOCAL_VARIABLE_TYPE_TABLE
#undef ATTR_METHOD_PARAMETERS
#undef ATTR_MODULE
#undef ATTR_MODULE_MAIN_CLASS
#undef ATTR_MODULE_PACKAGES
#undef ATTR_NEST_HOST
#undef ATTR_NEST_MEMBERS
#undef ATTR_PMG
#undef ATTR_RUNTIME_INVISIBLE_ANNOTATIONS
#undef ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS
#undef ATTR_RUNTIME_VISIBLE_ANNOTATIONS
#undef ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS
#undef ATTR_SIGNATURE
#undef ATTR_SOURCE_FILE
#undef ATTR_STACK_MAP
#undef ATTR_STACK_MAP_TABLE
#undef ATTR_SYNTHETIC
#undef ATTR_UNKNOWN
#undef BALOAD
#undef BASTORE
#undef BIPUSH
#undef BREAKPOINT
#undef CALOAD
#undef CASTORE
#undef CHECKCAST
#undef CHECKCAST_QUICK
#undef CHOP_FRAME
#undef CHOP_FRAME_MAX
#undef CLASS_TYPE_NAMES
#undef CONSTANT_NAMES
#undef CONSTRUCTOR_NAME
#undef CONSUME_STACK
#undef D2F
#undef D2I
#undef D2L
#undef DADD
#undef DALOAD
#undef DASTORE
#undef DCMPG
#undef DCMPL
#undef DCONST_0
#undef DCONST_1
#undef DDIV
#undef DLOAD
#undef DLOAD_0
#undef DLOAD_1
#undef DLOAD_2
#undef DLOAD_3
#undef DMUL
#undef DNEG
#undef DREM
#undef DRETURN
#undef DSTORE
#undef DSTORE_0
#undef DSTORE_1
#undef DSTORE_2
#undef DSTORE_3
#undef DSUB
#undef DUP
#undef DUP2
#undef DUP2_X1
#undef DUP2_X2
#undef DUP_X1
#undef DUP_X2
#undef F2D
#undef F2I
#undef F2L
#undef FADD
#undef FALOAD
#undef FASTORE
#undef FCMPG
#undef FCMPL
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FDIV
#undef FLOAD
#undef FLOAD_0
#undef FLOAD_1
#undef FLOAD_2
#undef FLOAD_3
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSTORE
#undef FSTORE_0
#undef FSTORE_1
#undef FSTORE_2
#undef FSTORE_3
#undef FSUB
#undef FULL_FRAME
#undef GETFIELD
#undef GETFIELD2_QUICK
#undef GETFIELD_QUICK
#undef GETFIELD_QUICK_W
#undef GETSTATIC
#undef GETSTATIC2_QUICK
#undef GETSTATIC_QUICK
#undef GOTO
#undef GOTO_W
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef IADD
#undef IALOAD
#undef IAND
#undef IASTORE
#undef ICONST_0
#undef ICONST_1
#undef ICONST_2
#undef ICONST_3
#undef ICONST_4
#undef ICONST_5
#undef ICONST_M1
#undef IDIV
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
#undef IINC
#undef ILLEGAL_OPCODE
#undef ILLEGAL_TYPE
#undef ILOAD
#undef ILOAD_0
#undef ILOAD_1
#undef ILOAD_2
#undef ILOAD_3
#undef IMPDEP1
#undef IMPDEP2
#undef IMUL
#undef INEG
#undef INSTANCEOF
#undef INSTANCEOF_QUICK
#undef INT2BYTE
#undef INT2CHAR
#undef INT2SHORT
#undef INTERFACES_IMPLEMENTED_BY_ARRAYS
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKEINTERFACE_QUICK
#undef INVOKENONVIRTUAL
#undef INVOKENONVIRTUAL_QUICK
#undef INVOKESPECIAL
#undef INVOKESTATIC
#undef INVOKESTATIC_QUICK
#undef INVOKESUPER_QUICK
#undef INVOKEVIRTUAL
#undef INVOKEVIRTUALOBJECT_QUICK
#undef INVOKEVIRTUAL_QUICK
#undef INVOKEVIRTUAL_QUICK_W
#undef IOR
#undef IREM
#undef IRETURN
#undef ISHL
#undef ISHR
#undef ISTORE
#undef ISTORE_0
#undef ISTORE_1
#undef ISTORE_2
#undef ISTORE_3
#undef ISUB
#undef ITEM_NAMES
#undef IUSHR
#undef IXOR
#undef JSR
#undef JSR_W
#undef JVM_CLASSFILE_MAGIC
#undef KNOWN_ATTRIBUTES
#undef L2D
#undef L2F
#undef L2I
#undef LADD
#undef LALOAD
#undef LAND
#undef LASTORE
#undef LCMP
#undef LCONST_0
#undef LCONST_1
#undef LDC
#undef LDC2_W
#undef LDC2_W_QUICK
#undef LDC_QUICK
#undef LDC_W
#undef LDC_W_QUICK
#undef LDIV
#undef LLOAD
#undef LLOAD_0
#undef LLOAD_1
#undef LLOAD_2
#undef LLOAD_3
#undef LMUL
#undef LNEG
#undef LOOKUPSWITCH
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSTORE
#undef LSTORE_0
#undef LSTORE_1
#undef LSTORE_2
#undef LSTORE_3
#undef LSUB
#undef LUSHR
#undef LXOR
#undef MAJOR
#undef MAJOR_10
#undef MAJOR_11
#undef MAJOR_12
#undef MAJOR_13
#undef MAJOR_14
#undef MAJOR_1_1
#undef MAJOR_1_2
#undef MAJOR_1_3
#undef MAJOR_1_4
#undef MAJOR_1_5
#undef MAJOR_1_6
#undef MAJOR_1_7
#undef MAJOR_1_8
#undef MAJOR_1_9
#undef MAJOR_9
#undef MAX_ACC_FLAG
#undef MAX_ACC_FLAG_I
#undef MAX_ARRAY_DIMENSIONS
#undef MAX_BYTE
#undef MAX_CODE_SIZE
#undef MAX_CP_ENTRIES
#undef MAX_SHORT
#undef METHODHANDLE_NAMES
#undef MINOR
#undef MINOR_10
#undef MINOR_11
#undef MINOR_12
#undef MINOR_13
#undef MINOR_14
#undef MINOR_1_1
#undef MINOR_1_2
#undef MINOR_1_3
#undef MINOR_1_4
#undef MINOR_1_5
#undef MINOR_1_6
#undef MINOR_1_7
#undef MINOR_1_8
#undef MINOR_1_9
#undef MINOR_9
#undef MONITORENTER
#undef MONITOREXIT
#undef MULTIANEWARRAY
#undef MULTIANEWARRAY_QUICK
#undef NEW
#undef NEWARRAY
#undef NEW_QUICK
#undef NOP
#undef NO_OF_OPERANDS
#undef OPCODE_NAMES
#undef OPCODE_NAMES_LENGTH
#undef POP
#undef POP2
#undef PRODUCE_STACK
#undef PUSH
#undef PUTFIELD
#undef PUTFIELD2_QUICK
#undef PUTFIELD_QUICK
#undef PUTFIELD_QUICK_W
#undef PUTSTATIC
#undef PUTSTATIC2_QUICK
#undef PUTSTATIC_QUICK
#undef RESERVED
#undef RET
#undef RETURN
#undef SALOAD
#undef SAME_FRAME
#undef SAME_FRAME_EXTENDED
#undef SAME_FRAME_MAX
#undef SAME_LOCALS_1_STACK_ITEM_FRAME
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_MAX
#undef SASTORE
#undef SHORT_TYPE_NAMES
#undef SIPUSH
#undef STATIC_INITIALIZER_NAME
#undef SWAP
#undef SWITCH
#undef TABLESWITCH
#undef TYPE_NAMES
#undef TYPE_OF_OPERANDS
#undef T_ADDRESS
#undef T_ARRAY
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_OBJECT
#undef T_REFERENCE
#undef T_SHORT
#undef T_UNKNOWN
#undef T_VOID
#undef UNDEFINED
#undef UNPREDICTABLE
#undef WIDE

using $shortArray2 = $Array<int16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

$CompoundAttribute _Const_FieldAnnotations_MAJOR_1_9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Const_FieldAnnotations_MINOR_1_9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Const_FieldAnnotations_MAX_ACC_FLAG[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Const_FieldInfo_[] = {
	{"JVM_CLASSFILE_MAGIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, JVM_CLASSFILE_MAGIC)},
	{"MAJOR_1_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_1)},
	{"MINOR_1_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_1)},
	{"MAJOR_1_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_2)},
	{"MINOR_1_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_2)},
	{"MAJOR_1_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_3)},
	{"MINOR_1_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_3)},
	{"MAJOR_1_4", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_4)},
	{"MINOR_1_4", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_4)},
	{"MAJOR_1_5", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_5)},
	{"MINOR_1_5", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_5)},
	{"MAJOR_1_6", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_6)},
	{"MINOR_1_6", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_6)},
	{"MAJOR_1_7", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_7)},
	{"MINOR_1_7", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_7)},
	{"MAJOR_1_8", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_1_8)},
	{"MINOR_1_8", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_1_8)},
	{"MAJOR_9", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_9)},
	{"MINOR_9", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_9)},
	{"MAJOR_1_9", "S", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Const, MAJOR_1_9), _Const_FieldAnnotations_MAJOR_1_9},
	{"MINOR_1_9", "S", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Const, MINOR_1_9), _Const_FieldAnnotations_MINOR_1_9},
	{"MAJOR_10", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_10)},
	{"MINOR_10", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_10)},
	{"MAJOR_11", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_11)},
	{"MINOR_11", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_11)},
	{"MAJOR_12", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_12)},
	{"MINOR_12", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_12)},
	{"MAJOR_13", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_13)},
	{"MINOR_13", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_13)},
	{"MAJOR_14", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR_14)},
	{"MINOR_14", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR_14)},
	{"MAJOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAJOR)},
	{"MINOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MINOR)},
	{"MAX_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAX_SHORT)},
	{"MAX_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAX_BYTE)},
	{"ACC_PUBLIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_PUBLIC)},
	{"ACC_PRIVATE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_PRIVATE)},
	{"ACC_PROTECTED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_PROTECTED)},
	{"ACC_STATIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_STATIC)},
	{"ACC_FINAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_FINAL)},
	{"ACC_OPEN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_OPEN)},
	{"ACC_SUPER", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_SUPER)},
	{"ACC_SYNCHRONIZED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_SYNCHRONIZED)},
	{"ACC_TRANSITIVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_TRANSITIVE)},
	{"ACC_BRIDGE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_BRIDGE)},
	{"ACC_STATIC_PHASE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_STATIC_PHASE)},
	{"ACC_VOLATILE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_VOLATILE)},
	{"ACC_TRANSIENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_TRANSIENT)},
	{"ACC_VARARGS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_VARARGS)},
	{"ACC_NATIVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_NATIVE)},
	{"ACC_INTERFACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_INTERFACE)},
	{"ACC_ABSTRACT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_ABSTRACT)},
	{"ACC_STRICT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_STRICT)},
	{"ACC_SYNTHETIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_SYNTHETIC)},
	{"ACC_ANNOTATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_ANNOTATION)},
	{"ACC_ENUM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_ENUM)},
	{"ACC_MANDATED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_MANDATED)},
	{"ACC_MODULE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACC_MODULE)},
	{"MAX_ACC_FLAG", "S", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Const, MAX_ACC_FLAG), _Const_FieldAnnotations_MAX_ACC_FLAG},
	{"MAX_ACC_FLAG_I", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAX_ACC_FLAG_I)},
	{"ACCESS_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, ACCESS_NAMES)},
	{"ACCESS_NAMES_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Const, ACCESS_NAMES_LENGTH)},
	{"CONSTANT_Utf8", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Utf8)},
	{"CONSTANT_Integer", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Integer)},
	{"CONSTANT_Float", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Float)},
	{"CONSTANT_Long", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Long)},
	{"CONSTANT_Double", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Double)},
	{"CONSTANT_Class", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Class)},
	{"CONSTANT_Fieldref", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Fieldref)},
	{"CONSTANT_String", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_String)},
	{"CONSTANT_Methodref", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Methodref)},
	{"CONSTANT_InterfaceMethodref", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_InterfaceMethodref)},
	{"CONSTANT_NameAndType", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_NameAndType)},
	{"CONSTANT_MethodHandle", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_MethodHandle)},
	{"CONSTANT_MethodType", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_MethodType)},
	{"CONSTANT_Dynamic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Dynamic)},
	{"CONSTANT_InvokeDynamic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_InvokeDynamic)},
	{"CONSTANT_Module", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Module)},
	{"CONSTANT_Package", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CONSTANT_Package)},
	{"CONSTANT_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, CONSTANT_NAMES)},
	{"STATIC_INITIALIZER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Const, STATIC_INITIALIZER_NAME)},
	{"CONSTRUCTOR_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Const, CONSTRUCTOR_NAME)},
	{"INTERFACES_IMPLEMENTED_BY_ARRAYS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, INTERFACES_IMPLEMENTED_BY_ARRAYS)},
	{"MAX_CP_ENTRIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAX_CP_ENTRIES)},
	{"MAX_CODE_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAX_CODE_SIZE)},
	{"MAX_ARRAY_DIMENSIONS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MAX_ARRAY_DIMENSIONS)},
	{"NOP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, NOP)},
	{"ACONST_NULL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ACONST_NULL)},
	{"ICONST_M1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_M1)},
	{"ICONST_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_0)},
	{"ICONST_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_1)},
	{"ICONST_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_2)},
	{"ICONST_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_3)},
	{"ICONST_4", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_4)},
	{"ICONST_5", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ICONST_5)},
	{"LCONST_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LCONST_0)},
	{"LCONST_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LCONST_1)},
	{"FCONST_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FCONST_0)},
	{"FCONST_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FCONST_1)},
	{"FCONST_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FCONST_2)},
	{"DCONST_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DCONST_0)},
	{"DCONST_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DCONST_1)},
	{"BIPUSH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, BIPUSH)},
	{"SIPUSH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SIPUSH)},
	{"LDC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDC)},
	{"LDC_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDC_W)},
	{"LDC2_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDC2_W)},
	{"ILOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ILOAD)},
	{"LLOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LLOAD)},
	{"FLOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FLOAD)},
	{"DLOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DLOAD)},
	{"ALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ALOAD)},
	{"ILOAD_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ILOAD_0)},
	{"ILOAD_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ILOAD_1)},
	{"ILOAD_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ILOAD_2)},
	{"ILOAD_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ILOAD_3)},
	{"LLOAD_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LLOAD_0)},
	{"LLOAD_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LLOAD_1)},
	{"LLOAD_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LLOAD_2)},
	{"LLOAD_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LLOAD_3)},
	{"FLOAD_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FLOAD_0)},
	{"FLOAD_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FLOAD_1)},
	{"FLOAD_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FLOAD_2)},
	{"FLOAD_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FLOAD_3)},
	{"DLOAD_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DLOAD_0)},
	{"DLOAD_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DLOAD_1)},
	{"DLOAD_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DLOAD_2)},
	{"DLOAD_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DLOAD_3)},
	{"ALOAD_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ALOAD_0)},
	{"ALOAD_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ALOAD_1)},
	{"ALOAD_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ALOAD_2)},
	{"ALOAD_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ALOAD_3)},
	{"IALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IALOAD)},
	{"LALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LALOAD)},
	{"FALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FALOAD)},
	{"DALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DALOAD)},
	{"AALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, AALOAD)},
	{"BALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, BALOAD)},
	{"CALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CALOAD)},
	{"SALOAD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SALOAD)},
	{"ISTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISTORE)},
	{"LSTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSTORE)},
	{"FSTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FSTORE)},
	{"DSTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DSTORE)},
	{"ASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ASTORE)},
	{"ISTORE_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISTORE_0)},
	{"ISTORE_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISTORE_1)},
	{"ISTORE_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISTORE_2)},
	{"ISTORE_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISTORE_3)},
	{"LSTORE_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSTORE_0)},
	{"LSTORE_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSTORE_1)},
	{"LSTORE_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSTORE_2)},
	{"LSTORE_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSTORE_3)},
	{"FSTORE_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FSTORE_0)},
	{"FSTORE_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FSTORE_1)},
	{"FSTORE_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FSTORE_2)},
	{"FSTORE_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FSTORE_3)},
	{"DSTORE_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DSTORE_0)},
	{"DSTORE_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DSTORE_1)},
	{"DSTORE_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DSTORE_2)},
	{"DSTORE_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DSTORE_3)},
	{"ASTORE_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ASTORE_0)},
	{"ASTORE_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ASTORE_1)},
	{"ASTORE_2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ASTORE_2)},
	{"ASTORE_3", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ASTORE_3)},
	{"IASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IASTORE)},
	{"LASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LASTORE)},
	{"FASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FASTORE)},
	{"DASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DASTORE)},
	{"AASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, AASTORE)},
	{"BASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, BASTORE)},
	{"CASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CASTORE)},
	{"SASTORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SASTORE)},
	{"POP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, POP)},
	{"POP2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, POP2)},
	{"DUP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DUP)},
	{"DUP_X1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DUP_X1)},
	{"DUP_X2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DUP_X2)},
	{"DUP2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DUP2)},
	{"DUP2_X1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DUP2_X1)},
	{"DUP2_X2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DUP2_X2)},
	{"SWAP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SWAP)},
	{"IADD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IADD)},
	{"LADD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LADD)},
	{"FADD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FADD)},
	{"DADD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DADD)},
	{"ISUB", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISUB)},
	{"LSUB", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSUB)},
	{"FSUB", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FSUB)},
	{"DSUB", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DSUB)},
	{"IMUL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IMUL)},
	{"LMUL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LMUL)},
	{"FMUL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FMUL)},
	{"DMUL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DMUL)},
	{"IDIV", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IDIV)},
	{"LDIV", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDIV)},
	{"FDIV", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FDIV)},
	{"DDIV", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DDIV)},
	{"IREM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IREM)},
	{"LREM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LREM)},
	{"FREM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FREM)},
	{"DREM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DREM)},
	{"INEG", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INEG)},
	{"LNEG", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LNEG)},
	{"FNEG", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FNEG)},
	{"DNEG", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DNEG)},
	{"ISHL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISHL)},
	{"LSHL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSHL)},
	{"ISHR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ISHR)},
	{"LSHR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LSHR)},
	{"IUSHR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IUSHR)},
	{"LUSHR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LUSHR)},
	{"IAND", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IAND)},
	{"LAND", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LAND)},
	{"IOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IOR)},
	{"LOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LOR)},
	{"IXOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IXOR)},
	{"LXOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LXOR)},
	{"IINC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IINC)},
	{"I2L", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, I2L)},
	{"I2F", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, I2F)},
	{"I2D", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, I2D)},
	{"L2I", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, L2I)},
	{"L2F", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, L2F)},
	{"L2D", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, L2D)},
	{"F2I", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, F2I)},
	{"F2L", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, F2L)},
	{"F2D", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, F2D)},
	{"D2I", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, D2I)},
	{"D2L", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, D2L)},
	{"D2F", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, D2F)},
	{"I2B", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, I2B)},
	{"INT2BYTE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INT2BYTE)},
	{"I2C", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, I2C)},
	{"INT2CHAR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INT2CHAR)},
	{"I2S", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, I2S)},
	{"INT2SHORT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INT2SHORT)},
	{"LCMP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LCMP)},
	{"FCMPL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FCMPL)},
	{"FCMPG", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FCMPG)},
	{"DCMPL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DCMPL)},
	{"DCMPG", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DCMPG)},
	{"IFEQ", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFEQ)},
	{"IFNE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFNE)},
	{"IFLT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFLT)},
	{"IFGE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFGE)},
	{"IFGT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFGT)},
	{"IFLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFLE)},
	{"IF_ICMPEQ", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ICMPEQ)},
	{"IF_ICMPNE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ICMPNE)},
	{"IF_ICMPLT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ICMPLT)},
	{"IF_ICMPGE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ICMPGE)},
	{"IF_ICMPGT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ICMPGT)},
	{"IF_ICMPLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ICMPLE)},
	{"IF_ACMPEQ", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ACMPEQ)},
	{"IF_ACMPNE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IF_ACMPNE)},
	{"GOTO", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GOTO)},
	{"JSR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, JSR)},
	{"RET", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, RET)},
	{"TABLESWITCH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, TABLESWITCH)},
	{"LOOKUPSWITCH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LOOKUPSWITCH)},
	{"IRETURN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IRETURN)},
	{"LRETURN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LRETURN)},
	{"FRETURN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FRETURN)},
	{"DRETURN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, DRETURN)},
	{"ARETURN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ARETURN)},
	{"RETURN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, RETURN)},
	{"GETSTATIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETSTATIC)},
	{"PUTSTATIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTSTATIC)},
	{"GETFIELD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETFIELD)},
	{"PUTFIELD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTFIELD)},
	{"INVOKEVIRTUAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEVIRTUAL)},
	{"INVOKESPECIAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKESPECIAL)},
	{"INVOKENONVIRTUAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKENONVIRTUAL)},
	{"INVOKESTATIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKESTATIC)},
	{"INVOKEINTERFACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEINTERFACE)},
	{"INVOKEDYNAMIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEDYNAMIC)},
	{"NEW", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, NEW)},
	{"NEWARRAY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, NEWARRAY)},
	{"ANEWARRAY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ANEWARRAY)},
	{"ARRAYLENGTH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ARRAYLENGTH)},
	{"ATHROW", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATHROW)},
	{"CHECKCAST", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CHECKCAST)},
	{"INSTANCEOF", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INSTANCEOF)},
	{"MONITORENTER", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MONITORENTER)},
	{"MONITOREXIT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MONITOREXIT)},
	{"WIDE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, WIDE)},
	{"MULTIANEWARRAY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MULTIANEWARRAY)},
	{"IFNULL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFNULL)},
	{"IFNONNULL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IFNONNULL)},
	{"GOTO_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GOTO_W)},
	{"JSR_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, JSR_W)},
	{"BREAKPOINT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, BREAKPOINT)},
	{"LDC_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDC_QUICK)},
	{"LDC_W_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDC_W_QUICK)},
	{"LDC2_W_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, LDC2_W_QUICK)},
	{"GETFIELD_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETFIELD_QUICK)},
	{"PUTFIELD_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTFIELD_QUICK)},
	{"GETFIELD2_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETFIELD2_QUICK)},
	{"PUTFIELD2_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTFIELD2_QUICK)},
	{"GETSTATIC_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETSTATIC_QUICK)},
	{"PUTSTATIC_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTSTATIC_QUICK)},
	{"GETSTATIC2_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETSTATIC2_QUICK)},
	{"PUTSTATIC2_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTSTATIC2_QUICK)},
	{"INVOKEVIRTUAL_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEVIRTUAL_QUICK)},
	{"INVOKENONVIRTUAL_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKENONVIRTUAL_QUICK)},
	{"INVOKESUPER_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKESUPER_QUICK)},
	{"INVOKESTATIC_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKESTATIC_QUICK)},
	{"INVOKEINTERFACE_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEINTERFACE_QUICK)},
	{"INVOKEVIRTUALOBJECT_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEVIRTUALOBJECT_QUICK)},
	{"NEW_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, NEW_QUICK)},
	{"ANEWARRAY_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ANEWARRAY_QUICK)},
	{"MULTIANEWARRAY_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, MULTIANEWARRAY_QUICK)},
	{"CHECKCAST_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CHECKCAST_QUICK)},
	{"INSTANCEOF_QUICK", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INSTANCEOF_QUICK)},
	{"INVOKEVIRTUAL_QUICK_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, INVOKEVIRTUAL_QUICK_W)},
	{"GETFIELD_QUICK_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, GETFIELD_QUICK_W)},
	{"PUTFIELD_QUICK_W", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUTFIELD_QUICK_W)},
	{"IMPDEP1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IMPDEP1)},
	{"IMPDEP2", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, IMPDEP2)},
	{"PUSH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, PUSH)},
	{"SWITCH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SWITCH)},
	{"UNDEFINED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, UNDEFINED)},
	{"UNPREDICTABLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, UNPREDICTABLE)},
	{"RESERVED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, RESERVED)},
	{"ILLEGAL_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Const, ILLEGAL_OPCODE)},
	{"ILLEGAL_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Const, ILLEGAL_TYPE)},
	{"T_BOOLEAN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_BOOLEAN)},
	{"T_CHAR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_CHAR)},
	{"T_FLOAT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_FLOAT)},
	{"T_DOUBLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_DOUBLE)},
	{"T_BYTE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_BYTE)},
	{"T_SHORT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_SHORT)},
	{"T_INT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_INT)},
	{"T_LONG", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_LONG)},
	{"T_VOID", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_VOID)},
	{"T_ARRAY", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_ARRAY)},
	{"T_OBJECT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_OBJECT)},
	{"T_REFERENCE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_REFERENCE)},
	{"T_UNKNOWN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_UNKNOWN)},
	{"T_ADDRESS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, T_ADDRESS)},
	{"TYPE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, TYPE_NAMES)},
	{"CLASS_TYPE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, CLASS_TYPE_NAMES)},
	{"SHORT_TYPE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, SHORT_TYPE_NAMES)},
	{"NO_OF_OPERANDS", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, NO_OF_OPERANDS)},
	{"TYPE_OF_OPERANDS", "[[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, TYPE_OF_OPERANDS)},
	{"OPCODE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, OPCODE_NAMES)},
	{"OPCODE_NAMES_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Const, OPCODE_NAMES_LENGTH)},
	{"CONSUME_STACK", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, CONSUME_STACK)},
	{"PRODUCE_STACK", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, PRODUCE_STACK)},
	{"ATTR_UNKNOWN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_UNKNOWN)},
	{"ATTR_SOURCE_FILE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_SOURCE_FILE)},
	{"ATTR_CONSTANT_VALUE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_CONSTANT_VALUE)},
	{"ATTR_CODE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_CODE)},
	{"ATTR_EXCEPTIONS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_EXCEPTIONS)},
	{"ATTR_LINE_NUMBER_TABLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_LINE_NUMBER_TABLE)},
	{"ATTR_LOCAL_VARIABLE_TABLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_LOCAL_VARIABLE_TABLE)},
	{"ATTR_INNER_CLASSES", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_INNER_CLASSES)},
	{"ATTR_SYNTHETIC", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_SYNTHETIC)},
	{"ATTR_DEPRECATED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_DEPRECATED)},
	{"ATTR_PMG", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_PMG)},
	{"ATTR_SIGNATURE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_SIGNATURE)},
	{"ATTR_STACK_MAP", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_STACK_MAP)},
	{"ATTR_RUNTIME_VISIBLE_ANNOTATIONS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_RUNTIME_VISIBLE_ANNOTATIONS)},
	{"ATTR_RUNTIME_INVISIBLE_ANNOTATIONS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_RUNTIME_INVISIBLE_ANNOTATIONS)},
	{"ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS)},
	{"ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS)},
	{"ATTR_ANNOTATION_DEFAULT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_ANNOTATION_DEFAULT)},
	{"ATTR_LOCAL_VARIABLE_TYPE_TABLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_LOCAL_VARIABLE_TYPE_TABLE)},
	{"ATTR_ENCLOSING_METHOD", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_ENCLOSING_METHOD)},
	{"ATTR_STACK_MAP_TABLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_STACK_MAP_TABLE)},
	{"ATTR_BOOTSTRAP_METHODS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_BOOTSTRAP_METHODS)},
	{"ATTR_METHOD_PARAMETERS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_METHOD_PARAMETERS)},
	{"ATTR_MODULE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_MODULE)},
	{"ATTR_MODULE_PACKAGES", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_MODULE_PACKAGES)},
	{"ATTR_MODULE_MAIN_CLASS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_MODULE_MAIN_CLASS)},
	{"ATTR_NEST_HOST", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_NEST_HOST)},
	{"ATTR_NEST_MEMBERS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ATTR_NEST_MEMBERS)},
	{"KNOWN_ATTRIBUTES", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, KNOWN_ATTRIBUTES)},
	{"ATTRIBUTE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, ATTRIBUTE_NAMES)},
	{"ITEM_Bogus", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Bogus)},
	{"ITEM_Integer", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Integer)},
	{"ITEM_Float", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Float)},
	{"ITEM_Double", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Double)},
	{"ITEM_Long", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Long)},
	{"ITEM_Null", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Null)},
	{"ITEM_InitObject", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_InitObject)},
	{"ITEM_Object", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_Object)},
	{"ITEM_NewObject", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, ITEM_NewObject)},
	{"ITEM_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, ITEM_NAMES)},
	{"SAME_FRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SAME_FRAME)},
	{"SAME_LOCALS_1_STACK_ITEM_FRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SAME_LOCALS_1_STACK_ITEM_FRAME)},
	{"SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED)},
	{"CHOP_FRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CHOP_FRAME)},
	{"SAME_FRAME_EXTENDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SAME_FRAME_EXTENDED)},
	{"APPEND_FRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, APPEND_FRAME)},
	{"FULL_FRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, FULL_FRAME)},
	{"SAME_FRAME_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SAME_FRAME_MAX)},
	{"SAME_LOCALS_1_STACK_ITEM_FRAME_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, SAME_LOCALS_1_STACK_ITEM_FRAME_MAX)},
	{"CHOP_FRAME_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, CHOP_FRAME_MAX)},
	{"APPEND_FRAME_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, APPEND_FRAME_MAX)},
	{"REF_getField", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_getField)},
	{"REF_getStatic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_getStatic)},
	{"REF_putField", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_putField)},
	{"REF_putStatic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_putStatic)},
	{"REF_invokeVirtual", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_invokeVirtual)},
	{"REF_invokeStatic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_invokeStatic)},
	{"REF_invokeSpecial", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_invokeSpecial)},
	{"REF_newInvokeSpecial", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_newInvokeSpecial)},
	{"REF_invokeInterface", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Const, REF_invokeInterface)},
	{"METHODHANDLE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Const, METHODHANDLE_NAMES)},
	{}
};

$MethodInfo _Const_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Const, init$, void)},
	{"getAccessName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getAccessName, $String*, int32_t)},
	{"getAttributeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getAttributeName, $String*, int32_t)},
	{"getClassTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getClassTypeName, $String*, int32_t)},
	{"getConstantName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getConstantName, $String*, int32_t)},
	{"getConsumeStack", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getConsumeStack, int32_t, int32_t)},
	{"getInterfacesImplementedByArrays", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(Const, getInterfacesImplementedByArrays, $Iterable*)},
	{"getItemName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getItemName, $String*, int32_t)},
	{"getMethodHandleName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getMethodHandleName, $String*, int32_t)},
	{"getNoOfOperands", "(I)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getNoOfOperands, int16_t, int32_t)},
	{"getOpcodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getOpcodeName, $String*, int32_t)},
	{"getOperandType", "(II)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getOperandType, int16_t, int32_t, int32_t)},
	{"getOperandTypeCount", "(I)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getOperandTypeCount, int64_t, int32_t)},
	{"getProduceStack", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getProduceStack, int32_t, int32_t)},
	{"getShortTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getShortTypeName, $String*, int32_t)},
	{"getTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Const, getTypeName, $String*, int32_t)},
	{}
};

$ClassInfo _Const_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.Const",
	"java.lang.Object",
	nullptr,
	_Const_FieldInfo_,
	_Const_MethodInfo_
};

$Object* allocate$Const($Class* clazz) {
	return $of($alloc(Const));
}

$StringArray* Const::ACCESS_NAMES = nullptr;
int32_t Const::ACCESS_NAMES_LENGTH = 0;
$StringArray* Const::CONSTANT_NAMES = nullptr;
$String* Const::STATIC_INITIALIZER_NAME = nullptr;
$String* Const::CONSTRUCTOR_NAME = nullptr;
$StringArray* Const::INTERFACES_IMPLEMENTED_BY_ARRAYS = nullptr;
$String* Const::ILLEGAL_OPCODE = nullptr;
$String* Const::ILLEGAL_TYPE = nullptr;
$StringArray* Const::TYPE_NAMES = nullptr;
$StringArray* Const::CLASS_TYPE_NAMES = nullptr;
$StringArray* Const::SHORT_TYPE_NAMES = nullptr;
$shorts* Const::NO_OF_OPERANDS = nullptr;
$shortArray2* Const::TYPE_OF_OPERANDS = nullptr;
$StringArray* Const::OPCODE_NAMES = nullptr;
int32_t Const::OPCODE_NAMES_LENGTH = 0;
$ints* Const::CONSUME_STACK = nullptr;
$ints* Const::PRODUCE_STACK = nullptr;
$StringArray* Const::ATTRIBUTE_NAMES = nullptr;
$StringArray* Const::ITEM_NAMES = nullptr;
$StringArray* Const::METHODHANDLE_NAMES = nullptr;

$String* Const::getAccessName(int32_t index) {
	$init(Const);
	return $nc(Const::ACCESS_NAMES)->get(index);
}

$String* Const::getConstantName(int32_t index) {
	$init(Const);
	return $nc(Const::CONSTANT_NAMES)->get(index);
}

$Iterable* Const::getInterfacesImplementedByArrays() {
	$init(Const);
	return $Collections::unmodifiableList($($Arrays::asList(Const::INTERFACES_IMPLEMENTED_BY_ARRAYS)));
}

$String* Const::getTypeName(int32_t index) {
	$init(Const);
	return $nc(Const::TYPE_NAMES)->get(index);
}

$String* Const::getClassTypeName(int32_t index) {
	$init(Const);
	return $nc(Const::CLASS_TYPE_NAMES)->get(index);
}

$String* Const::getShortTypeName(int32_t index) {
	$init(Const);
	return $nc(Const::SHORT_TYPE_NAMES)->get(index);
}

int16_t Const::getNoOfOperands(int32_t index) {
	$init(Const);
	return $nc(Const::NO_OF_OPERANDS)->get(index);
}

int16_t Const::getOperandType(int32_t opcode, int32_t index) {
	$init(Const);
	return $nc($nc(Const::TYPE_OF_OPERANDS)->get(opcode))->get(index);
}

int64_t Const::getOperandTypeCount(int32_t opcode) {
	$init(Const);
	return $nc($nc(Const::TYPE_OF_OPERANDS)->get(opcode))->length;
}

$String* Const::getOpcodeName(int32_t index) {
	$init(Const);
	return $nc(Const::OPCODE_NAMES)->get(index);
}

int32_t Const::getConsumeStack(int32_t index) {
	$init(Const);
	return $nc(Const::CONSUME_STACK)->get(index);
}

int32_t Const::getProduceStack(int32_t index) {
	$init(Const);
	return $nc(Const::PRODUCE_STACK)->get(index);
}

$String* Const::getAttributeName(int32_t index) {
	$init(Const);
	return $nc(Const::ATTRIBUTE_NAMES)->get(index);
}

$String* Const::getItemName(int32_t index) {
	$init(Const);
	return $nc(Const::ITEM_NAMES)->get(index);
}

$String* Const::getMethodHandleName(int32_t index) {
	$init(Const);
	return $nc(Const::METHODHANDLE_NAMES)->get(index);
}

void Const::init$() {
}

void clinit$Const($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Const::STATIC_INITIALIZER_NAME, "<clinit>"_s);
	$assignStatic(Const::CONSTRUCTOR_NAME, "<init>"_s);
	$assignStatic(Const::ILLEGAL_OPCODE, "<illegal opcode>"_s);
	$assignStatic(Const::ILLEGAL_TYPE, "<illegal type>"_s);
	$assignStatic(Const::ACCESS_NAMES, $new($StringArray, {
		"public"_s,
		"private"_s,
		"protected"_s,
		"static"_s,
		"final"_s,
		"synchronized"_s,
		"volatile"_s,
		"transient"_s,
		"native"_s,
		"interface"_s,
		"abstract"_s,
		"strictfp"_s,
		"synthetic"_s,
		"annotation"_s,
		"enum"_s,
		"module"_s
	}));
	Const::ACCESS_NAMES_LENGTH = $nc(Const::ACCESS_NAMES)->length;
	$assignStatic(Const::CONSTANT_NAMES, $new($StringArray, {
		""_s,
		"CONSTANT_Utf8"_s,
		""_s,
		"CONSTANT_Integer"_s,
		"CONSTANT_Float"_s,
		"CONSTANT_Long"_s,
		"CONSTANT_Double"_s,
		"CONSTANT_Class"_s,
		"CONSTANT_String"_s,
		"CONSTANT_Fieldref"_s,
		"CONSTANT_Methodref"_s,
		"CONSTANT_InterfaceMethodref"_s,
		"CONSTANT_NameAndType"_s,
		""_s,
		""_s,
		"CONSTANT_MethodHandle"_s,
		"CONSTANT_MethodType"_s,
		"CONSTANT_Dynamic"_s,
		"CONSTANT_InvokeDynamic"_s,
		"CONSTANT_Module"_s,
		"CONSTANT_Package"_s
	}));
	$assignStatic(Const::INTERFACES_IMPLEMENTED_BY_ARRAYS, $new($StringArray, {
		"java.lang.Cloneable"_s,
		"java.io.Serializable"_s
	}));
	$assignStatic(Const::TYPE_NAMES, $new($StringArray, {
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		"boolean"_s,
		"char"_s,
		"float"_s,
		"double"_s,
		"byte"_s,
		"short"_s,
		"int"_s,
		"long"_s,
		"void"_s,
		"array"_s,
		"object"_s,
		"unknown"_s,
		"address"_s
	}));
	$assignStatic(Const::CLASS_TYPE_NAMES, $new($StringArray, {
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		"java.lang.Boolean"_s,
		"java.lang.Character"_s,
		"java.lang.Float"_s,
		"java.lang.Double"_s,
		"java.lang.Byte"_s,
		"java.lang.Short"_s,
		"java.lang.Integer"_s,
		"java.lang.Long"_s,
		"java.lang.Void"_s,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE
	}));
	$assignStatic(Const::SHORT_TYPE_NAMES, $new($StringArray, {
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		"Z"_s,
		"C"_s,
		"F"_s,
		"D"_s,
		"B"_s,
		"S"_s,
		"I"_s,
		"J"_s,
		"V"_s,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE,
		Const::ILLEGAL_TYPE
	}));
	$assignStatic(Const::NO_OF_OPERANDS, $new($shorts, {
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)1,
		(int16_t)2,
		(int16_t)2,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)2,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)1,
		Const::UNPREDICTABLE,
		Const::UNPREDICTABLE,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)2,
		(int16_t)4,
		(int16_t)4,
		(int16_t)2,
		(int16_t)1,
		(int16_t)2,
		(int16_t)0,
		(int16_t)0,
		(int16_t)2,
		(int16_t)2,
		(int16_t)0,
		(int16_t)0,
		Const::UNPREDICTABLE,
		(int16_t)3,
		(int16_t)2,
		(int16_t)2,
		(int16_t)4,
		(int16_t)4,
		(int16_t)0,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::UNDEFINED,
		Const::RESERVED,
		Const::RESERVED
	}));
	$assignStatic(Const::TYPE_OF_OPERANDS, $new($shortArray2, {
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {
			(int16_t)Const::T_BYTE,
			(int16_t)Const::T_BYTE
		}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {
			(int16_t)Const::T_SHORT,
			(int16_t)Const::T_BYTE,
			(int16_t)Const::T_BYTE
		}),
		$$new($shorts, {
			(int16_t)Const::T_SHORT,
			(int16_t)Const::T_BYTE,
			(int16_t)Const::T_BYTE
		}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, {(int16_t)Const::T_BYTE}),
		$$new($shorts, {
			(int16_t)Const::T_SHORT,
			(int16_t)Const::T_BYTE
		}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_SHORT}),
		$$new($shorts, {(int16_t)Const::T_INT}),
		$$new($shorts, {(int16_t)Const::T_INT}),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0),
		$$new($shorts, 0)
	}));
	$assignStatic(Const::OPCODE_NAMES, $new($StringArray, {
		"nop"_s,
		"aconst_null"_s,
		"iconst_m1"_s,
		"iconst_0"_s,
		"iconst_1"_s,
		"iconst_2"_s,
		"iconst_3"_s,
		"iconst_4"_s,
		"iconst_5"_s,
		"lconst_0"_s,
		"lconst_1"_s,
		"fconst_0"_s,
		"fconst_1"_s,
		"fconst_2"_s,
		"dconst_0"_s,
		"dconst_1"_s,
		"bipush"_s,
		"sipush"_s,
		"ldc"_s,
		"ldc_w"_s,
		"ldc2_w"_s,
		"iload"_s,
		"lload"_s,
		"fload"_s,
		"dload"_s,
		"aload"_s,
		"iload_0"_s,
		"iload_1"_s,
		"iload_2"_s,
		"iload_3"_s,
		"lload_0"_s,
		"lload_1"_s,
		"lload_2"_s,
		"lload_3"_s,
		"fload_0"_s,
		"fload_1"_s,
		"fload_2"_s,
		"fload_3"_s,
		"dload_0"_s,
		"dload_1"_s,
		"dload_2"_s,
		"dload_3"_s,
		"aload_0"_s,
		"aload_1"_s,
		"aload_2"_s,
		"aload_3"_s,
		"iaload"_s,
		"laload"_s,
		"faload"_s,
		"daload"_s,
		"aaload"_s,
		"baload"_s,
		"caload"_s,
		"saload"_s,
		"istore"_s,
		"lstore"_s,
		"fstore"_s,
		"dstore"_s,
		"astore"_s,
		"istore_0"_s,
		"istore_1"_s,
		"istore_2"_s,
		"istore_3"_s,
		"lstore_0"_s,
		"lstore_1"_s,
		"lstore_2"_s,
		"lstore_3"_s,
		"fstore_0"_s,
		"fstore_1"_s,
		"fstore_2"_s,
		"fstore_3"_s,
		"dstore_0"_s,
		"dstore_1"_s,
		"dstore_2"_s,
		"dstore_3"_s,
		"astore_0"_s,
		"astore_1"_s,
		"astore_2"_s,
		"astore_3"_s,
		"iastore"_s,
		"lastore"_s,
		"fastore"_s,
		"dastore"_s,
		"aastore"_s,
		"bastore"_s,
		"castore"_s,
		"sastore"_s,
		"pop"_s,
		"pop2"_s,
		"dup"_s,
		"dup_x1"_s,
		"dup_x2"_s,
		"dup2"_s,
		"dup2_x1"_s,
		"dup2_x2"_s,
		"swap"_s,
		"iadd"_s,
		"ladd"_s,
		"fadd"_s,
		"dadd"_s,
		"isub"_s,
		"lsub"_s,
		"fsub"_s,
		"dsub"_s,
		"imul"_s,
		"lmul"_s,
		"fmul"_s,
		"dmul"_s,
		"idiv"_s,
		"ldiv"_s,
		"fdiv"_s,
		"ddiv"_s,
		"irem"_s,
		"lrem"_s,
		"frem"_s,
		"drem"_s,
		"ineg"_s,
		"lneg"_s,
		"fneg"_s,
		"dneg"_s,
		"ishl"_s,
		"lshl"_s,
		"ishr"_s,
		"lshr"_s,
		"iushr"_s,
		"lushr"_s,
		"iand"_s,
		"land"_s,
		"ior"_s,
		"lor"_s,
		"ixor"_s,
		"lxor"_s,
		"iinc"_s,
		"i2l"_s,
		"i2f"_s,
		"i2d"_s,
		"l2i"_s,
		"l2f"_s,
		"l2d"_s,
		"f2i"_s,
		"f2l"_s,
		"f2d"_s,
		"d2i"_s,
		"d2l"_s,
		"d2f"_s,
		"i2b"_s,
		"i2c"_s,
		"i2s"_s,
		"lcmp"_s,
		"fcmpl"_s,
		"fcmpg"_s,
		"dcmpl"_s,
		"dcmpg"_s,
		"ifeq"_s,
		"ifne"_s,
		"iflt"_s,
		"ifge"_s,
		"ifgt"_s,
		"ifle"_s,
		"if_icmpeq"_s,
		"if_icmpne"_s,
		"if_icmplt"_s,
		"if_icmpge"_s,
		"if_icmpgt"_s,
		"if_icmple"_s,
		"if_acmpeq"_s,
		"if_acmpne"_s,
		"goto"_s,
		"jsr"_s,
		"ret"_s,
		"tableswitch"_s,
		"lookupswitch"_s,
		"ireturn"_s,
		"lreturn"_s,
		"freturn"_s,
		"dreturn"_s,
		"areturn"_s,
		"return"_s,
		"getstatic"_s,
		"putstatic"_s,
		"getfield"_s,
		"putfield"_s,
		"invokevirtual"_s,
		"invokespecial"_s,
		"invokestatic"_s,
		"invokeinterface"_s,
		"invokedynamic"_s,
		"new"_s,
		"newarray"_s,
		"anewarray"_s,
		"arraylength"_s,
		"athrow"_s,
		"checkcast"_s,
		"instanceof"_s,
		"monitorenter"_s,
		"monitorexit"_s,
		"wide"_s,
		"multianewarray"_s,
		"ifnull"_s,
		"ifnonnull"_s,
		"goto_w"_s,
		"jsr_w"_s,
		"breakpoint"_s,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		Const::ILLEGAL_OPCODE,
		"impdep1"_s,
		"impdep2"_s
	}));
	Const::OPCODE_NAMES_LENGTH = $nc(Const::OPCODE_NAMES)->length;
	$assignStatic(Const::CONSUME_STACK, $new($ints, {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		1,
		2,
		1,
		2,
		1,
		1,
		1,
		1,
		1,
		2,
		2,
		2,
		2,
		1,
		1,
		1,
		1,
		2,
		2,
		2,
		2,
		1,
		1,
		1,
		1,
		3,
		4,
		3,
		4,
		3,
		3,
		3,
		3,
		1,
		2,
		1,
		2,
		3,
		2,
		3,
		4,
		2,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		2,
		4,
		1,
		2,
		1,
		2,
		2,
		3,
		2,
		3,
		2,
		3,
		2,
		4,
		2,
		4,
		2,
		4,
		0,
		1,
		1,
		1,
		2,
		2,
		2,
		1,
		1,
		1,
		2,
		2,
		2,
		1,
		1,
		1,
		4,
		2,
		2,
		4,
		4,
		1,
		1,
		1,
		1,
		1,
		1,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		0,
		0,
		0,
		1,
		1,
		1,
		2,
		1,
		2,
		1,
		0,
		0,
		(int32_t)Const::UNPREDICTABLE,
		1,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		0,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		0,
		(int32_t)Const::UNPREDICTABLE,
		1,
		1,
		0,
		0,
		0,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE
	}));
	$assignStatic(Const::PRODUCE_STACK, $new($ints, {
		0,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		2,
		2,
		1,
		1,
		1,
		2,
		2,
		1,
		1,
		1,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		1,
		1,
		1,
		1,
		2,
		2,
		2,
		2,
		1,
		1,
		1,
		1,
		2,
		2,
		2,
		2,
		1,
		1,
		1,
		1,
		1,
		2,
		1,
		2,
		1,
		1,
		1,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		2,
		3,
		4,
		4,
		5,
		6,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		1,
		2,
		0,
		2,
		1,
		2,
		1,
		1,
		2,
		1,
		2,
		2,
		1,
		2,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(int32_t)Const::UNPREDICTABLE,
		0,
		(int32_t)Const::UNPREDICTABLE,
		0,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		0,
		0,
		0,
		1,
		0,
		0,
		0,
		1,
		0,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNDEFINED,
		(int32_t)Const::UNPREDICTABLE,
		(int32_t)Const::UNPREDICTABLE
	}));
	$assignStatic(Const::ATTRIBUTE_NAMES, $new($StringArray, {
		"SourceFile"_s,
		"ConstantValue"_s,
		"Code"_s,
		"Exceptions"_s,
		"LineNumberTable"_s,
		"LocalVariableTable"_s,
		"InnerClasses"_s,
		"Synthetic"_s,
		"Deprecated"_s,
		"PMGClass"_s,
		"Signature"_s,
		"StackMap"_s,
		"RuntimeVisibleAnnotations"_s,
		"RuntimeInvisibleAnnotations"_s,
		"RuntimeVisibleParameterAnnotations"_s,
		"RuntimeInvisibleParameterAnnotations"_s,
		"AnnotationDefault"_s,
		"LocalVariableTypeTable"_s,
		"EnclosingMethod"_s,
		"StackMapTable"_s,
		"BootstrapMethods"_s,
		"MethodParameters"_s,
		"Module"_s,
		"ModulePackages"_s,
		"ModuleMainClass"_s,
		"NestHost"_s,
		"NestMembers"_s
	}));
	$assignStatic(Const::ITEM_NAMES, $new($StringArray, {
		"Bogus"_s,
		"Integer"_s,
		"Float"_s,
		"Double"_s,
		"Long"_s,
		"Null"_s,
		"InitObject"_s,
		"Object"_s,
		"NewObject"_s
	}));
	$assignStatic(Const::METHODHANDLE_NAMES, $new($StringArray, {
		""_s,
		"getField"_s,
		"getStatic"_s,
		"putField"_s,
		"putStatic"_s,
		"invokeVirtual"_s,
		"invokeStatic"_s,
		"invokeSpecial"_s,
		"newInvokeSpecial"_s,
		"invokeInterface"_s
	}));
}

Const::Const() {
}

$Class* Const::load$($String* name, bool initialize) {
	$loadClass(Const, name, initialize, &_Const_ClassInfo_, clinit$Const, allocate$Const);
	return class$;
}

$Class* Const::class$ = nullptr;

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com