#ifndef _com_sun_org_apache_bcel_internal_Const_h_
#define _com_sun_org_apache_bcel_internal_Const_h_
//$ class com.sun.org.apache.bcel.internal.Const
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AALOAD")
#undef AALOAD
#pragma push_macro("AASTORE")
#undef AASTORE
#pragma push_macro("ACCESS_NAMES")
#undef ACCESS_NAMES
#pragma push_macro("ACCESS_NAMES_LENGTH")
#undef ACCESS_NAMES_LENGTH
#pragma push_macro("ACC_ABSTRACT")
#undef ACC_ABSTRACT
#pragma push_macro("ACC_ANNOTATION")
#undef ACC_ANNOTATION
#pragma push_macro("ACC_BRIDGE")
#undef ACC_BRIDGE
#pragma push_macro("ACC_ENUM")
#undef ACC_ENUM
#pragma push_macro("ACC_FINAL")
#undef ACC_FINAL
#pragma push_macro("ACC_INTERFACE")
#undef ACC_INTERFACE
#pragma push_macro("ACC_MANDATED")
#undef ACC_MANDATED
#pragma push_macro("ACC_MODULE")
#undef ACC_MODULE
#pragma push_macro("ACC_NATIVE")
#undef ACC_NATIVE
#pragma push_macro("ACC_OPEN")
#undef ACC_OPEN
#pragma push_macro("ACC_PRIVATE")
#undef ACC_PRIVATE
#pragma push_macro("ACC_PROTECTED")
#undef ACC_PROTECTED
#pragma push_macro("ACC_PUBLIC")
#undef ACC_PUBLIC
#pragma push_macro("ACC_STATIC")
#undef ACC_STATIC
#pragma push_macro("ACC_STATIC_PHASE")
#undef ACC_STATIC_PHASE
#pragma push_macro("ACC_STRICT")
#undef ACC_STRICT
#pragma push_macro("ACC_SUPER")
#undef ACC_SUPER
#pragma push_macro("ACC_SYNCHRONIZED")
#undef ACC_SYNCHRONIZED
#pragma push_macro("ACC_SYNTHETIC")
#undef ACC_SYNTHETIC
#pragma push_macro("ACC_TRANSIENT")
#undef ACC_TRANSIENT
#pragma push_macro("ACC_TRANSITIVE")
#undef ACC_TRANSITIVE
#pragma push_macro("ACC_VARARGS")
#undef ACC_VARARGS
#pragma push_macro("ACC_VOLATILE")
#undef ACC_VOLATILE
#pragma push_macro("ACONST_NULL")
#undef ACONST_NULL
#pragma push_macro("ALOAD")
#undef ALOAD
#pragma push_macro("ALOAD_0")
#undef ALOAD_0
#pragma push_macro("ALOAD_1")
#undef ALOAD_1
#pragma push_macro("ALOAD_2")
#undef ALOAD_2
#pragma push_macro("ALOAD_3")
#undef ALOAD_3
#pragma push_macro("ANEWARRAY")
#undef ANEWARRAY
#pragma push_macro("ANEWARRAY_QUICK")
#undef ANEWARRAY_QUICK
#pragma push_macro("APPEND_FRAME")
#undef APPEND_FRAME
#pragma push_macro("APPEND_FRAME_MAX")
#undef APPEND_FRAME_MAX
#pragma push_macro("ARETURN")
#undef ARETURN
#pragma push_macro("ARRAYLENGTH")
#undef ARRAYLENGTH
#pragma push_macro("ASTORE")
#undef ASTORE
#pragma push_macro("ASTORE_0")
#undef ASTORE_0
#pragma push_macro("ASTORE_1")
#undef ASTORE_1
#pragma push_macro("ASTORE_2")
#undef ASTORE_2
#pragma push_macro("ASTORE_3")
#undef ASTORE_3
#pragma push_macro("ATHROW")
#undef ATHROW
#pragma push_macro("ATTRIBUTE_NAMES")
#undef ATTRIBUTE_NAMES
#pragma push_macro("ATTR_ANNOTATION_DEFAULT")
#undef ATTR_ANNOTATION_DEFAULT
#pragma push_macro("ATTR_BOOTSTRAP_METHODS")
#undef ATTR_BOOTSTRAP_METHODS
#pragma push_macro("ATTR_CODE")
#undef ATTR_CODE
#pragma push_macro("ATTR_CONSTANT_VALUE")
#undef ATTR_CONSTANT_VALUE
#pragma push_macro("ATTR_DEPRECATED")
#undef ATTR_DEPRECATED
#pragma push_macro("ATTR_ENCLOSING_METHOD")
#undef ATTR_ENCLOSING_METHOD
#pragma push_macro("ATTR_EXCEPTIONS")
#undef ATTR_EXCEPTIONS
#pragma push_macro("ATTR_INNER_CLASSES")
#undef ATTR_INNER_CLASSES
#pragma push_macro("ATTR_LINE_NUMBER_TABLE")
#undef ATTR_LINE_NUMBER_TABLE
#pragma push_macro("ATTR_LOCAL_VARIABLE_TABLE")
#undef ATTR_LOCAL_VARIABLE_TABLE
#pragma push_macro("ATTR_LOCAL_VARIABLE_TYPE_TABLE")
#undef ATTR_LOCAL_VARIABLE_TYPE_TABLE
#pragma push_macro("ATTR_METHOD_PARAMETERS")
#undef ATTR_METHOD_PARAMETERS
#pragma push_macro("ATTR_MODULE")
#undef ATTR_MODULE
#pragma push_macro("ATTR_MODULE_MAIN_CLASS")
#undef ATTR_MODULE_MAIN_CLASS
#pragma push_macro("ATTR_MODULE_PACKAGES")
#undef ATTR_MODULE_PACKAGES
#pragma push_macro("ATTR_NEST_HOST")
#undef ATTR_NEST_HOST
#pragma push_macro("ATTR_NEST_MEMBERS")
#undef ATTR_NEST_MEMBERS
#pragma push_macro("ATTR_PMG")
#undef ATTR_PMG
#pragma push_macro("ATTR_RUNTIME_INVISIBLE_ANNOTATIONS")
#undef ATTR_RUNTIME_INVISIBLE_ANNOTATIONS
#pragma push_macro("ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS")
#undef ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS
#pragma push_macro("ATTR_RUNTIME_VISIBLE_ANNOTATIONS")
#undef ATTR_RUNTIME_VISIBLE_ANNOTATIONS
#pragma push_macro("ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS")
#undef ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS
#pragma push_macro("ATTR_SIGNATURE")
#undef ATTR_SIGNATURE
#pragma push_macro("ATTR_SOURCE_FILE")
#undef ATTR_SOURCE_FILE
#pragma push_macro("ATTR_STACK_MAP")
#undef ATTR_STACK_MAP
#pragma push_macro("ATTR_STACK_MAP_TABLE")
#undef ATTR_STACK_MAP_TABLE
#pragma push_macro("ATTR_SYNTHETIC")
#undef ATTR_SYNTHETIC
#pragma push_macro("ATTR_UNKNOWN")
#undef ATTR_UNKNOWN
#pragma push_macro("BALOAD")
#undef BALOAD
#pragma push_macro("BASTORE")
#undef BASTORE
#pragma push_macro("BIPUSH")
#undef BIPUSH
#pragma push_macro("BREAKPOINT")
#undef BREAKPOINT
#pragma push_macro("CALOAD")
#undef CALOAD
#pragma push_macro("CASTORE")
#undef CASTORE
#pragma push_macro("CHECKCAST")
#undef CHECKCAST
#pragma push_macro("CHECKCAST_QUICK")
#undef CHECKCAST_QUICK
#pragma push_macro("CHOP_FRAME")
#undef CHOP_FRAME
#pragma push_macro("CHOP_FRAME_MAX")
#undef CHOP_FRAME_MAX
#pragma push_macro("CLASS_TYPE_NAMES")
#undef CLASS_TYPE_NAMES
#pragma push_macro("CONSTANT_NAMES")
#undef CONSTANT_NAMES
#pragma push_macro("CONSTRUCTOR_NAME")
#undef CONSTRUCTOR_NAME
#pragma push_macro("CONSUME_STACK")
#undef CONSUME_STACK
#pragma push_macro("D2F")
#undef D2F
#pragma push_macro("D2I")
#undef D2I
#pragma push_macro("D2L")
#undef D2L
#pragma push_macro("DADD")
#undef DADD
#pragma push_macro("DALOAD")
#undef DALOAD
#pragma push_macro("DASTORE")
#undef DASTORE
#pragma push_macro("DCMPG")
#undef DCMPG
#pragma push_macro("DCMPL")
#undef DCMPL
#pragma push_macro("DCONST_0")
#undef DCONST_0
#pragma push_macro("DCONST_1")
#undef DCONST_1
#pragma push_macro("DDIV")
#undef DDIV
#pragma push_macro("DLOAD")
#undef DLOAD
#pragma push_macro("DLOAD_0")
#undef DLOAD_0
#pragma push_macro("DLOAD_1")
#undef DLOAD_1
#pragma push_macro("DLOAD_2")
#undef DLOAD_2
#pragma push_macro("DLOAD_3")
#undef DLOAD_3
#pragma push_macro("DMUL")
#undef DMUL
#pragma push_macro("DNEG")
#undef DNEG
#pragma push_macro("DREM")
#undef DREM
#pragma push_macro("DRETURN")
#undef DRETURN
#pragma push_macro("DSTORE")
#undef DSTORE
#pragma push_macro("DSTORE_0")
#undef DSTORE_0
#pragma push_macro("DSTORE_1")
#undef DSTORE_1
#pragma push_macro("DSTORE_2")
#undef DSTORE_2
#pragma push_macro("DSTORE_3")
#undef DSTORE_3
#pragma push_macro("DSUB")
#undef DSUB
#pragma push_macro("DUP")
#undef DUP
#pragma push_macro("DUP2")
#undef DUP2
#pragma push_macro("DUP2_X1")
#undef DUP2_X1
#pragma push_macro("DUP2_X2")
#undef DUP2_X2
#pragma push_macro("DUP_X1")
#undef DUP_X1
#pragma push_macro("DUP_X2")
#undef DUP_X2
#pragma push_macro("F2D")
#undef F2D
#pragma push_macro("F2I")
#undef F2I
#pragma push_macro("F2L")
#undef F2L
#pragma push_macro("FADD")
#undef FADD
#pragma push_macro("FALOAD")
#undef FALOAD
#pragma push_macro("FASTORE")
#undef FASTORE
#pragma push_macro("FCMPG")
#undef FCMPG
#pragma push_macro("FCMPL")
#undef FCMPL
#pragma push_macro("FCONST_0")
#undef FCONST_0
#pragma push_macro("FCONST_1")
#undef FCONST_1
#pragma push_macro("FCONST_2")
#undef FCONST_2
#pragma push_macro("FDIV")
#undef FDIV
#pragma push_macro("FLOAD")
#undef FLOAD
#pragma push_macro("FLOAD_0")
#undef FLOAD_0
#pragma push_macro("FLOAD_1")
#undef FLOAD_1
#pragma push_macro("FLOAD_2")
#undef FLOAD_2
#pragma push_macro("FLOAD_3")
#undef FLOAD_3
#pragma push_macro("FMUL")
#undef FMUL
#pragma push_macro("FNEG")
#undef FNEG
#pragma push_macro("FREM")
#undef FREM
#pragma push_macro("FRETURN")
#undef FRETURN
#pragma push_macro("FSTORE")
#undef FSTORE
#pragma push_macro("FSTORE_0")
#undef FSTORE_0
#pragma push_macro("FSTORE_1")
#undef FSTORE_1
#pragma push_macro("FSTORE_2")
#undef FSTORE_2
#pragma push_macro("FSTORE_3")
#undef FSTORE_3
#pragma push_macro("FSUB")
#undef FSUB
#pragma push_macro("FULL_FRAME")
#undef FULL_FRAME
#pragma push_macro("GETFIELD")
#undef GETFIELD
#pragma push_macro("GETFIELD2_QUICK")
#undef GETFIELD2_QUICK
#pragma push_macro("GETFIELD_QUICK")
#undef GETFIELD_QUICK
#pragma push_macro("GETFIELD_QUICK_W")
#undef GETFIELD_QUICK_W
#pragma push_macro("GETSTATIC")
#undef GETSTATIC
#pragma push_macro("GETSTATIC2_QUICK")
#undef GETSTATIC2_QUICK
#pragma push_macro("GETSTATIC_QUICK")
#undef GETSTATIC_QUICK
#pragma push_macro("GOTO")
#undef GOTO
#pragma push_macro("GOTO_W")
#undef GOTO_W
#pragma push_macro("I2B")
#undef I2B
#pragma push_macro("I2C")
#undef I2C
#pragma push_macro("I2D")
#undef I2D
#pragma push_macro("I2F")
#undef I2F
#pragma push_macro("I2L")
#undef I2L
#pragma push_macro("I2S")
#undef I2S
#pragma push_macro("IADD")
#undef IADD
#pragma push_macro("IALOAD")
#undef IALOAD
#pragma push_macro("IAND")
#undef IAND
#pragma push_macro("IASTORE")
#undef IASTORE
#pragma push_macro("ICONST_0")
#undef ICONST_0
#pragma push_macro("ICONST_1")
#undef ICONST_1
#pragma push_macro("ICONST_2")
#undef ICONST_2
#pragma push_macro("ICONST_3")
#undef ICONST_3
#pragma push_macro("ICONST_4")
#undef ICONST_4
#pragma push_macro("ICONST_5")
#undef ICONST_5
#pragma push_macro("ICONST_M1")
#undef ICONST_M1
#pragma push_macro("IDIV")
#undef IDIV
#pragma push_macro("IFEQ")
#undef IFEQ
#pragma push_macro("IFGE")
#undef IFGE
#pragma push_macro("IFGT")
#undef IFGT
#pragma push_macro("IFLE")
#undef IFLE
#pragma push_macro("IFLT")
#undef IFLT
#pragma push_macro("IFNE")
#undef IFNE
#pragma push_macro("IFNONNULL")
#undef IFNONNULL
#pragma push_macro("IFNULL")
#undef IFNULL
#pragma push_macro("IF_ACMPEQ")
#undef IF_ACMPEQ
#pragma push_macro("IF_ACMPNE")
#undef IF_ACMPNE
#pragma push_macro("IF_ICMPEQ")
#undef IF_ICMPEQ
#pragma push_macro("IF_ICMPGE")
#undef IF_ICMPGE
#pragma push_macro("IF_ICMPGT")
#undef IF_ICMPGT
#pragma push_macro("IF_ICMPLE")
#undef IF_ICMPLE
#pragma push_macro("IF_ICMPLT")
#undef IF_ICMPLT
#pragma push_macro("IF_ICMPNE")
#undef IF_ICMPNE
#pragma push_macro("IINC")
#undef IINC
#pragma push_macro("ILLEGAL_OPCODE")
#undef ILLEGAL_OPCODE
#pragma push_macro("ILLEGAL_TYPE")
#undef ILLEGAL_TYPE
#pragma push_macro("ILOAD")
#undef ILOAD
#pragma push_macro("ILOAD_0")
#undef ILOAD_0
#pragma push_macro("ILOAD_1")
#undef ILOAD_1
#pragma push_macro("ILOAD_2")
#undef ILOAD_2
#pragma push_macro("ILOAD_3")
#undef ILOAD_3
#pragma push_macro("IMPDEP1")
#undef IMPDEP1
#pragma push_macro("IMPDEP2")
#undef IMPDEP2
#pragma push_macro("IMUL")
#undef IMUL
#pragma push_macro("INEG")
#undef INEG
#pragma push_macro("INSTANCEOF")
#undef INSTANCEOF
#pragma push_macro("INSTANCEOF_QUICK")
#undef INSTANCEOF_QUICK
#pragma push_macro("INT2BYTE")
#undef INT2BYTE
#pragma push_macro("INT2CHAR")
#undef INT2CHAR
#pragma push_macro("INT2SHORT")
#undef INT2SHORT
#pragma push_macro("INTERFACES_IMPLEMENTED_BY_ARRAYS")
#undef INTERFACES_IMPLEMENTED_BY_ARRAYS
#pragma push_macro("INVOKEDYNAMIC")
#undef INVOKEDYNAMIC
#pragma push_macro("INVOKEINTERFACE")
#undef INVOKEINTERFACE
#pragma push_macro("INVOKEINTERFACE_QUICK")
#undef INVOKEINTERFACE_QUICK
#pragma push_macro("INVOKENONVIRTUAL")
#undef INVOKENONVIRTUAL
#pragma push_macro("INVOKENONVIRTUAL_QUICK")
#undef INVOKENONVIRTUAL_QUICK
#pragma push_macro("INVOKESPECIAL")
#undef INVOKESPECIAL
#pragma push_macro("INVOKESTATIC")
#undef INVOKESTATIC
#pragma push_macro("INVOKESTATIC_QUICK")
#undef INVOKESTATIC_QUICK
#pragma push_macro("INVOKESUPER_QUICK")
#undef INVOKESUPER_QUICK
#pragma push_macro("INVOKEVIRTUAL")
#undef INVOKEVIRTUAL
#pragma push_macro("INVOKEVIRTUALOBJECT_QUICK")
#undef INVOKEVIRTUALOBJECT_QUICK
#pragma push_macro("INVOKEVIRTUAL_QUICK")
#undef INVOKEVIRTUAL_QUICK
#pragma push_macro("INVOKEVIRTUAL_QUICK_W")
#undef INVOKEVIRTUAL_QUICK_W
#pragma push_macro("IOR")
#undef IOR
#pragma push_macro("IREM")
#undef IREM
#pragma push_macro("IRETURN")
#undef IRETURN
#pragma push_macro("ISHL")
#undef ISHL
#pragma push_macro("ISHR")
#undef ISHR
#pragma push_macro("ISTORE")
#undef ISTORE
#pragma push_macro("ISTORE_0")
#undef ISTORE_0
#pragma push_macro("ISTORE_1")
#undef ISTORE_1
#pragma push_macro("ISTORE_2")
#undef ISTORE_2
#pragma push_macro("ISTORE_3")
#undef ISTORE_3
#pragma push_macro("ISUB")
#undef ISUB
#pragma push_macro("ITEM_NAMES")
#undef ITEM_NAMES
#pragma push_macro("IUSHR")
#undef IUSHR
#pragma push_macro("IXOR")
#undef IXOR
#pragma push_macro("JSR")
#undef JSR
#pragma push_macro("JSR_W")
#undef JSR_W
#pragma push_macro("JVM_CLASSFILE_MAGIC")
#undef JVM_CLASSFILE_MAGIC
#pragma push_macro("KNOWN_ATTRIBUTES")
#undef KNOWN_ATTRIBUTES
#pragma push_macro("L2D")
#undef L2D
#pragma push_macro("L2F")
#undef L2F
#pragma push_macro("L2I")
#undef L2I
#pragma push_macro("LADD")
#undef LADD
#pragma push_macro("LALOAD")
#undef LALOAD
#pragma push_macro("LAND")
#undef LAND
#pragma push_macro("LASTORE")
#undef LASTORE
#pragma push_macro("LCMP")
#undef LCMP
#pragma push_macro("LCONST_0")
#undef LCONST_0
#pragma push_macro("LCONST_1")
#undef LCONST_1
#pragma push_macro("LDC")
#undef LDC
#pragma push_macro("LDC2_W")
#undef LDC2_W
#pragma push_macro("LDC2_W_QUICK")
#undef LDC2_W_QUICK
#pragma push_macro("LDC_QUICK")
#undef LDC_QUICK
#pragma push_macro("LDC_W")
#undef LDC_W
#pragma push_macro("LDC_W_QUICK")
#undef LDC_W_QUICK
#pragma push_macro("LDIV")
#undef LDIV
#pragma push_macro("LLOAD")
#undef LLOAD
#pragma push_macro("LLOAD_0")
#undef LLOAD_0
#pragma push_macro("LLOAD_1")
#undef LLOAD_1
#pragma push_macro("LLOAD_2")
#undef LLOAD_2
#pragma push_macro("LLOAD_3")
#undef LLOAD_3
#pragma push_macro("LMUL")
#undef LMUL
#pragma push_macro("LNEG")
#undef LNEG
#pragma push_macro("LOOKUPSWITCH")
#undef LOOKUPSWITCH
#pragma push_macro("LOR")
#undef LOR
#pragma push_macro("LREM")
#undef LREM
#pragma push_macro("LRETURN")
#undef LRETURN
#pragma push_macro("LSHL")
#undef LSHL
#pragma push_macro("LSHR")
#undef LSHR
#pragma push_macro("LSTORE")
#undef LSTORE
#pragma push_macro("LSTORE_0")
#undef LSTORE_0
#pragma push_macro("LSTORE_1")
#undef LSTORE_1
#pragma push_macro("LSTORE_2")
#undef LSTORE_2
#pragma push_macro("LSTORE_3")
#undef LSTORE_3
#pragma push_macro("LSUB")
#undef LSUB
#pragma push_macro("LUSHR")
#undef LUSHR
#pragma push_macro("LXOR")
#undef LXOR
#pragma push_macro("MAJOR")
#undef MAJOR
#pragma push_macro("MAJOR_10")
#undef MAJOR_10
#pragma push_macro("MAJOR_11")
#undef MAJOR_11
#pragma push_macro("MAJOR_12")
#undef MAJOR_12
#pragma push_macro("MAJOR_13")
#undef MAJOR_13
#pragma push_macro("MAJOR_14")
#undef MAJOR_14
#pragma push_macro("MAJOR_1_1")
#undef MAJOR_1_1
#pragma push_macro("MAJOR_1_2")
#undef MAJOR_1_2
#pragma push_macro("MAJOR_1_3")
#undef MAJOR_1_3
#pragma push_macro("MAJOR_1_4")
#undef MAJOR_1_4
#pragma push_macro("MAJOR_1_5")
#undef MAJOR_1_5
#pragma push_macro("MAJOR_1_6")
#undef MAJOR_1_6
#pragma push_macro("MAJOR_1_7")
#undef MAJOR_1_7
#pragma push_macro("MAJOR_1_8")
#undef MAJOR_1_8
#pragma push_macro("MAJOR_1_9")
#undef MAJOR_1_9
#pragma push_macro("MAJOR_9")
#undef MAJOR_9
#pragma push_macro("MAX_ACC_FLAG")
#undef MAX_ACC_FLAG
#pragma push_macro("MAX_ACC_FLAG_I")
#undef MAX_ACC_FLAG_I
#pragma push_macro("MAX_ARRAY_DIMENSIONS")
#undef MAX_ARRAY_DIMENSIONS
#pragma push_macro("MAX_BYTE")
#undef MAX_BYTE
#pragma push_macro("MAX_CODE_SIZE")
#undef MAX_CODE_SIZE
#pragma push_macro("MAX_CP_ENTRIES")
#undef MAX_CP_ENTRIES
#pragma push_macro("MAX_SHORT")
#undef MAX_SHORT
#pragma push_macro("METHODHANDLE_NAMES")
#undef METHODHANDLE_NAMES
#pragma push_macro("MINOR")
#undef MINOR
#pragma push_macro("MINOR_10")
#undef MINOR_10
#pragma push_macro("MINOR_11")
#undef MINOR_11
#pragma push_macro("MINOR_12")
#undef MINOR_12
#pragma push_macro("MINOR_13")
#undef MINOR_13
#pragma push_macro("MINOR_14")
#undef MINOR_14
#pragma push_macro("MINOR_1_1")
#undef MINOR_1_1
#pragma push_macro("MINOR_1_2")
#undef MINOR_1_2
#pragma push_macro("MINOR_1_3")
#undef MINOR_1_3
#pragma push_macro("MINOR_1_4")
#undef MINOR_1_4
#pragma push_macro("MINOR_1_5")
#undef MINOR_1_5
#pragma push_macro("MINOR_1_6")
#undef MINOR_1_6
#pragma push_macro("MINOR_1_7")
#undef MINOR_1_7
#pragma push_macro("MINOR_1_8")
#undef MINOR_1_8
#pragma push_macro("MINOR_1_9")
#undef MINOR_1_9
#pragma push_macro("MINOR_9")
#undef MINOR_9
#pragma push_macro("MONITORENTER")
#undef MONITORENTER
#pragma push_macro("MONITOREXIT")
#undef MONITOREXIT
#pragma push_macro("MULTIANEWARRAY")
#undef MULTIANEWARRAY
#pragma push_macro("MULTIANEWARRAY_QUICK")
#undef MULTIANEWARRAY_QUICK
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("NEWARRAY")
#undef NEWARRAY
#pragma push_macro("NEW_QUICK")
#undef NEW_QUICK
#pragma push_macro("NOP")
#undef NOP
#pragma push_macro("NO_OF_OPERANDS")
#undef NO_OF_OPERANDS
#pragma push_macro("OPCODE_NAMES")
#undef OPCODE_NAMES
#pragma push_macro("OPCODE_NAMES_LENGTH")
#undef OPCODE_NAMES_LENGTH
#pragma push_macro("POP")
#undef POP
#pragma push_macro("POP2")
#undef POP2
#pragma push_macro("PRODUCE_STACK")
#undef PRODUCE_STACK
#pragma push_macro("PUSH")
#undef PUSH
#pragma push_macro("PUTFIELD")
#undef PUTFIELD
#pragma push_macro("PUTFIELD2_QUICK")
#undef PUTFIELD2_QUICK
#pragma push_macro("PUTFIELD_QUICK")
#undef PUTFIELD_QUICK
#pragma push_macro("PUTFIELD_QUICK_W")
#undef PUTFIELD_QUICK_W
#pragma push_macro("PUTSTATIC")
#undef PUTSTATIC
#pragma push_macro("PUTSTATIC2_QUICK")
#undef PUTSTATIC2_QUICK
#pragma push_macro("PUTSTATIC_QUICK")
#undef PUTSTATIC_QUICK
#pragma push_macro("RESERVED")
#undef RESERVED
#pragma push_macro("RET")
#undef RET
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("SALOAD")
#undef SALOAD
#pragma push_macro("SAME_FRAME")
#undef SAME_FRAME
#pragma push_macro("SAME_FRAME_EXTENDED")
#undef SAME_FRAME_EXTENDED
#pragma push_macro("SAME_FRAME_MAX")
#undef SAME_FRAME_MAX
#pragma push_macro("SAME_LOCALS_1_STACK_ITEM_FRAME")
#undef SAME_LOCALS_1_STACK_ITEM_FRAME
#pragma push_macro("SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED")
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#pragma push_macro("SAME_LOCALS_1_STACK_ITEM_FRAME_MAX")
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_MAX
#pragma push_macro("SASTORE")
#undef SASTORE
#pragma push_macro("SHORT_TYPE_NAMES")
#undef SHORT_TYPE_NAMES
#pragma push_macro("SIPUSH")
#undef SIPUSH
#pragma push_macro("STATIC_INITIALIZER_NAME")
#undef STATIC_INITIALIZER_NAME
#pragma push_macro("SWAP")
#undef SWAP
#pragma push_macro("SWITCH")
#undef SWITCH
#pragma push_macro("TABLESWITCH")
#undef TABLESWITCH
#pragma push_macro("TYPE_NAMES")
#undef TYPE_NAMES
#pragma push_macro("TYPE_OF_OPERANDS")
#undef TYPE_OF_OPERANDS
#pragma push_macro("T_ADDRESS")
#undef T_ADDRESS
#pragma push_macro("T_ARRAY")
#undef T_ARRAY
#pragma push_macro("T_BOOLEAN")
#undef T_BOOLEAN
#pragma push_macro("T_BYTE")
#undef T_BYTE
#pragma push_macro("T_CHAR")
#undef T_CHAR
#pragma push_macro("T_DOUBLE")
#undef T_DOUBLE
#pragma push_macro("T_FLOAT")
#undef T_FLOAT
#pragma push_macro("T_INT")
#undef T_INT
#pragma push_macro("T_LONG")
#undef T_LONG
#pragma push_macro("T_OBJECT")
#undef T_OBJECT
#pragma push_macro("T_REFERENCE")
#undef T_REFERENCE
#pragma push_macro("T_SHORT")
#undef T_SHORT
#pragma push_macro("T_UNKNOWN")
#undef T_UNKNOWN
#pragma push_macro("T_VOID")
#undef T_VOID
#pragma push_macro("UNDEFINED")
#undef UNDEFINED
#pragma push_macro("UNPREDICTABLE")
#undef UNPREDICTABLE
#pragma push_macro("WIDE")
#undef WIDE

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

class Const : public ::java::lang::Object {
	$class(Const, 0, ::java::lang::Object)
public:
	Const();
	void init$();
	static $String* getAccessName(int32_t index);
	static $String* getAttributeName(int32_t index);
	static $String* getClassTypeName(int32_t index);
	static $String* getConstantName(int32_t index);
	static int32_t getConsumeStack(int32_t index);
	static ::java::lang::Iterable* getInterfacesImplementedByArrays();
	static $String* getItemName(int32_t index);
	static $String* getMethodHandleName(int32_t index);
	static int16_t getNoOfOperands(int32_t index);
	static $String* getOpcodeName(int32_t index);
	static int16_t getOperandType(int32_t opcode, int32_t index);
	static int64_t getOperandTypeCount(int32_t opcode);
	static int32_t getProduceStack(int32_t index);
	static $String* getShortTypeName(int32_t index);
	static $String* getTypeName(int32_t index);
	static const int32_t JVM_CLASSFILE_MAGIC = 0xCAFEBABE;
	static const int16_t MAJOR_1_1 = 45;
	static const int16_t MINOR_1_1 = 3;
	static const int16_t MAJOR_1_2 = 46;
	static const int16_t MINOR_1_2 = 0;
	static const int16_t MAJOR_1_3 = 47;
	static const int16_t MINOR_1_3 = 0;
	static const int16_t MAJOR_1_4 = 48;
	static const int16_t MINOR_1_4 = 0;
	static const int16_t MAJOR_1_5 = 49;
	static const int16_t MINOR_1_5 = 0;
	static const int16_t MAJOR_1_6 = 50;
	static const int16_t MINOR_1_6 = 0;
	static const int16_t MAJOR_1_7 = 51;
	static const int16_t MINOR_1_7 = 0;
	static const int16_t MAJOR_1_8 = 52;
	static const int16_t MINOR_1_8 = 0;
	static const int16_t MAJOR_9 = 53;
	static const int16_t MINOR_9 = 0;
	static const int16_t MAJOR_1_9 = MAJOR_9;
	static const int16_t MINOR_1_9 = MINOR_9;
	static const int16_t MAJOR_10 = 54;
	static const int16_t MINOR_10 = 0;
	static const int16_t MAJOR_11 = 55;
	static const int16_t MINOR_11 = 0;
	static const int16_t MAJOR_12 = 56;
	static const int16_t MINOR_12 = 0;
	static const int16_t MAJOR_13 = 57;
	static const int16_t MINOR_13 = 0;
	static const int16_t MAJOR_14 = 58;
	static const int16_t MINOR_14 = 0;
	static const int16_t MAJOR = MAJOR_1_1;
	static const int16_t MINOR = MINOR_1_1;
	static const int32_t MAX_SHORT = 0x0000FFFF;
	static const int32_t MAX_BYTE = 255;
	static const int16_t ACC_PUBLIC = 1;
	static const int16_t ACC_PRIVATE = 2;
	static const int16_t ACC_PROTECTED = 4;
	static const int16_t ACC_STATIC = 8;
	static const int16_t ACC_FINAL = 16;
	static const int16_t ACC_OPEN = 32;
	static const int16_t ACC_SUPER = 32;
	static const int16_t ACC_SYNCHRONIZED = 32;
	static const int16_t ACC_TRANSITIVE = 32;
	static const int16_t ACC_BRIDGE = 64;
	static const int16_t ACC_STATIC_PHASE = 64;
	static const int16_t ACC_VOLATILE = 64;
	static const int16_t ACC_TRANSIENT = 128;
	static const int16_t ACC_VARARGS = 128;
	static const int16_t ACC_NATIVE = 256;
	static const int16_t ACC_INTERFACE = 512;
	static const int16_t ACC_ABSTRACT = 1024;
	static const int16_t ACC_STRICT = 2048;
	static const int16_t ACC_SYNTHETIC = 4096;
	static const int16_t ACC_ANNOTATION = 8192;
	static const int16_t ACC_ENUM = 16384;
	static const int16_t ACC_MANDATED = (int16_t)32768;
	static const int16_t ACC_MODULE = (int16_t)32768;
	static const int16_t MAX_ACC_FLAG = ACC_ENUM;
	static const int32_t MAX_ACC_FLAG_I = 32768;
	static $StringArray* ACCESS_NAMES;
	static int32_t ACCESS_NAMES_LENGTH;
	static const int8_t CONSTANT_Utf8 = 1;
	static const int8_t CONSTANT_Integer = 3;
	static const int8_t CONSTANT_Float = 4;
	static const int8_t CONSTANT_Long = 5;
	static const int8_t CONSTANT_Double = 6;
	static const int8_t CONSTANT_Class = 7;
	static const int8_t CONSTANT_Fieldref = 9;
	static const int8_t CONSTANT_String = 8;
	static const int8_t CONSTANT_Methodref = 10;
	static const int8_t CONSTANT_InterfaceMethodref = 11;
	static const int8_t CONSTANT_NameAndType = 12;
	static const int8_t CONSTANT_MethodHandle = 15;
	static const int8_t CONSTANT_MethodType = 16;
	static const int8_t CONSTANT_Dynamic = 17;
	static const int8_t CONSTANT_InvokeDynamic = 18;
	static const int8_t CONSTANT_Module = 19;
	static const int8_t CONSTANT_Package = 20;
	static $StringArray* CONSTANT_NAMES;
	static $String* STATIC_INITIALIZER_NAME;
	static $String* CONSTRUCTOR_NAME;
	static $StringArray* INTERFACES_IMPLEMENTED_BY_ARRAYS;
	static const int32_t MAX_CP_ENTRIES = 0x0000FFFF;
	static const int32_t MAX_CODE_SIZE = 0x00010000;
	static const int32_t MAX_ARRAY_DIMENSIONS = 255;
	static const int16_t NOP = 0;
	static const int16_t ACONST_NULL = 1;
	static const int16_t ICONST_M1 = 2;
	static const int16_t ICONST_0 = 3;
	static const int16_t ICONST_1 = 4;
	static const int16_t ICONST_2 = 5;
	static const int16_t ICONST_3 = 6;
	static const int16_t ICONST_4 = 7;
	static const int16_t ICONST_5 = 8;
	static const int16_t LCONST_0 = 9;
	static const int16_t LCONST_1 = 10;
	static const int16_t FCONST_0 = 11;
	static const int16_t FCONST_1 = 12;
	static const int16_t FCONST_2 = 13;
	static const int16_t DCONST_0 = 14;
	static const int16_t DCONST_1 = 15;
	static const int16_t BIPUSH = 16;
	static const int16_t SIPUSH = 17;
	static const int16_t LDC = 18;
	static const int16_t LDC_W = 19;
	static const int16_t LDC2_W = 20;
	static const int16_t ILOAD = 21;
	static const int16_t LLOAD = 22;
	static const int16_t FLOAD = 23;
	static const int16_t DLOAD = 24;
	static const int16_t ALOAD = 25;
	static const int16_t ILOAD_0 = 26;
	static const int16_t ILOAD_1 = 27;
	static const int16_t ILOAD_2 = 28;
	static const int16_t ILOAD_3 = 29;
	static const int16_t LLOAD_0 = 30;
	static const int16_t LLOAD_1 = 31;
	static const int16_t LLOAD_2 = 32;
	static const int16_t LLOAD_3 = 33;
	static const int16_t FLOAD_0 = 34;
	static const int16_t FLOAD_1 = 35;
	static const int16_t FLOAD_2 = 36;
	static const int16_t FLOAD_3 = 37;
	static const int16_t DLOAD_0 = 38;
	static const int16_t DLOAD_1 = 39;
	static const int16_t DLOAD_2 = 40;
	static const int16_t DLOAD_3 = 41;
	static const int16_t ALOAD_0 = 42;
	static const int16_t ALOAD_1 = 43;
	static const int16_t ALOAD_2 = 44;
	static const int16_t ALOAD_3 = 45;
	static const int16_t IALOAD = 46;
	static const int16_t LALOAD = 47;
	static const int16_t FALOAD = 48;
	static const int16_t DALOAD = 49;
	static const int16_t AALOAD = 50;
	static const int16_t BALOAD = 51;
	static const int16_t CALOAD = 52;
	static const int16_t SALOAD = 53;
	static const int16_t ISTORE = 54;
	static const int16_t LSTORE = 55;
	static const int16_t FSTORE = 56;
	static const int16_t DSTORE = 57;
	static const int16_t ASTORE = 58;
	static const int16_t ISTORE_0 = 59;
	static const int16_t ISTORE_1 = 60;
	static const int16_t ISTORE_2 = 61;
	static const int16_t ISTORE_3 = 62;
	static const int16_t LSTORE_0 = 63;
	static const int16_t LSTORE_1 = 64;
	static const int16_t LSTORE_2 = 65;
	static const int16_t LSTORE_3 = 66;
	static const int16_t FSTORE_0 = 67;
	static const int16_t FSTORE_1 = 68;
	static const int16_t FSTORE_2 = 69;
	static const int16_t FSTORE_3 = 70;
	static const int16_t DSTORE_0 = 71;
	static const int16_t DSTORE_1 = 72;
	static const int16_t DSTORE_2 = 73;
	static const int16_t DSTORE_3 = 74;
	static const int16_t ASTORE_0 = 75;
	static const int16_t ASTORE_1 = 76;
	static const int16_t ASTORE_2 = 77;
	static const int16_t ASTORE_3 = 78;
	static const int16_t IASTORE = 79;
	static const int16_t LASTORE = 80;
	static const int16_t FASTORE = 81;
	static const int16_t DASTORE = 82;
	static const int16_t AASTORE = 83;
	static const int16_t BASTORE = 84;
	static const int16_t CASTORE = 85;
	static const int16_t SASTORE = 86;
	static const int16_t POP = 87;
	static const int16_t POP2 = 88;
	static const int16_t DUP = 89;
	static const int16_t DUP_X1 = 90;
	static const int16_t DUP_X2 = 91;
	static const int16_t DUP2 = 92;
	static const int16_t DUP2_X1 = 93;
	static const int16_t DUP2_X2 = 94;
	static const int16_t SWAP = 95;
	static const int16_t IADD = 96;
	static const int16_t LADD = 97;
	static const int16_t FADD = 98;
	static const int16_t DADD = 99;
	static const int16_t ISUB = 100;
	static const int16_t LSUB = 101;
	static const int16_t FSUB = 102;
	static const int16_t DSUB = 103;
	static const int16_t IMUL = 104;
	static const int16_t LMUL = 105;
	static const int16_t FMUL = 106;
	static const int16_t DMUL = 107;
	static const int16_t IDIV = 108;
	static const int16_t LDIV = 109;
	static const int16_t FDIV = 110;
	static const int16_t DDIV = 111;
	static const int16_t IREM = 112;
	static const int16_t LREM = 113;
	static const int16_t FREM = 114;
	static const int16_t DREM = 115;
	static const int16_t INEG = 116;
	static const int16_t LNEG = 117;
	static const int16_t FNEG = 118;
	static const int16_t DNEG = 119;
	static const int16_t ISHL = 120;
	static const int16_t LSHL = 121;
	static const int16_t ISHR = 122;
	static const int16_t LSHR = 123;
	static const int16_t IUSHR = 124;
	static const int16_t LUSHR = 125;
	static const int16_t IAND = 126;
	static const int16_t LAND = 127;
	static const int16_t IOR = 128;
	static const int16_t LOR = 129;
	static const int16_t IXOR = 130;
	static const int16_t LXOR = 131;
	static const int16_t IINC = 132;
	static const int16_t I2L = 133;
	static const int16_t I2F = 134;
	static const int16_t I2D = 135;
	static const int16_t L2I = 136;
	static const int16_t L2F = 137;
	static const int16_t L2D = 138;
	static const int16_t F2I = 139;
	static const int16_t F2L = 140;
	static const int16_t F2D = 141;
	static const int16_t D2I = 142;
	static const int16_t D2L = 143;
	static const int16_t D2F = 144;
	static const int16_t I2B = 145;
	static const int16_t INT2BYTE = 145;
	static const int16_t I2C = 146;
	static const int16_t INT2CHAR = 146;
	static const int16_t I2S = 147;
	static const int16_t INT2SHORT = 147;
	static const int16_t LCMP = 148;
	static const int16_t FCMPL = 149;
	static const int16_t FCMPG = 150;
	static const int16_t DCMPL = 151;
	static const int16_t DCMPG = 152;
	static const int16_t IFEQ = 153;
	static const int16_t IFNE = 154;
	static const int16_t IFLT = 155;
	static const int16_t IFGE = 156;
	static const int16_t IFGT = 157;
	static const int16_t IFLE = 158;
	static const int16_t IF_ICMPEQ = 159;
	static const int16_t IF_ICMPNE = 160;
	static const int16_t IF_ICMPLT = 161;
	static const int16_t IF_ICMPGE = 162;
	static const int16_t IF_ICMPGT = 163;
	static const int16_t IF_ICMPLE = 164;
	static const int16_t IF_ACMPEQ = 165;
	static const int16_t IF_ACMPNE = 166;
	static const int16_t GOTO = 167;
	static const int16_t JSR = 168;
	static const int16_t RET = 169;
	static const int16_t TABLESWITCH = 170;
	static const int16_t LOOKUPSWITCH = 171;
	static const int16_t IRETURN = 172;
	static const int16_t LRETURN = 173;
	static const int16_t FRETURN = 174;
	static const int16_t DRETURN = 175;
	static const int16_t ARETURN = 176;
	static const int16_t RETURN = 177;
	static const int16_t GETSTATIC = 178;
	static const int16_t PUTSTATIC = 179;
	static const int16_t GETFIELD = 180;
	static const int16_t PUTFIELD = 181;
	static const int16_t INVOKEVIRTUAL = 182;
	static const int16_t INVOKESPECIAL = 183;
	static const int16_t INVOKENONVIRTUAL = 183;
	static const int16_t INVOKESTATIC = 184;
	static const int16_t INVOKEINTERFACE = 185;
	static const int16_t INVOKEDYNAMIC = 186;
	static const int16_t NEW = 187;
	static const int16_t NEWARRAY = 188;
	static const int16_t ANEWARRAY = 189;
	static const int16_t ARRAYLENGTH = 190;
	static const int16_t ATHROW = 191;
	static const int16_t CHECKCAST = 192;
	static const int16_t INSTANCEOF = 193;
	static const int16_t MONITORENTER = 194;
	static const int16_t MONITOREXIT = 195;
	static const int16_t WIDE = 196;
	static const int16_t MULTIANEWARRAY = 197;
	static const int16_t IFNULL = 198;
	static const int16_t IFNONNULL = 199;
	static const int16_t GOTO_W = 200;
	static const int16_t JSR_W = 201;
	static const int16_t BREAKPOINT = 202;
	static const int16_t LDC_QUICK = 203;
	static const int16_t LDC_W_QUICK = 204;
	static const int16_t LDC2_W_QUICK = 205;
	static const int16_t GETFIELD_QUICK = 206;
	static const int16_t PUTFIELD_QUICK = 207;
	static const int16_t GETFIELD2_QUICK = 208;
	static const int16_t PUTFIELD2_QUICK = 209;
	static const int16_t GETSTATIC_QUICK = 210;
	static const int16_t PUTSTATIC_QUICK = 211;
	static const int16_t GETSTATIC2_QUICK = 212;
	static const int16_t PUTSTATIC2_QUICK = 213;
	static const int16_t INVOKEVIRTUAL_QUICK = 214;
	static const int16_t INVOKENONVIRTUAL_QUICK = 215;
	static const int16_t INVOKESUPER_QUICK = 216;
	static const int16_t INVOKESTATIC_QUICK = 217;
	static const int16_t INVOKEINTERFACE_QUICK = 218;
	static const int16_t INVOKEVIRTUALOBJECT_QUICK = 219;
	static const int16_t NEW_QUICK = 221;
	static const int16_t ANEWARRAY_QUICK = 222;
	static const int16_t MULTIANEWARRAY_QUICK = 223;
	static const int16_t CHECKCAST_QUICK = 224;
	static const int16_t INSTANCEOF_QUICK = 225;
	static const int16_t INVOKEVIRTUAL_QUICK_W = 226;
	static const int16_t GETFIELD_QUICK_W = 227;
	static const int16_t PUTFIELD_QUICK_W = 228;
	static const int16_t IMPDEP1 = 254;
	static const int16_t IMPDEP2 = 255;
	static const int16_t PUSH = 4711;
	static const int16_t SWITCH = 4712;
	static const int16_t UNDEFINED = (-1);
	static const int16_t UNPREDICTABLE = (-2);
	static const int16_t RESERVED = (-3);
	static $String* ILLEGAL_OPCODE;
	static $String* ILLEGAL_TYPE;
	static const int8_t T_BOOLEAN = 4;
	static const int8_t T_CHAR = 5;
	static const int8_t T_FLOAT = 6;
	static const int8_t T_DOUBLE = 7;
	static const int8_t T_BYTE = 8;
	static const int8_t T_SHORT = 9;
	static const int8_t T_INT = 10;
	static const int8_t T_LONG = 11;
	static const int8_t T_VOID = 12;
	static const int8_t T_ARRAY = 13;
	static const int8_t T_OBJECT = 14;
	static const int8_t T_REFERENCE = 14;
	static const int8_t T_UNKNOWN = 15;
	static const int8_t T_ADDRESS = 16;
	static $StringArray* TYPE_NAMES;
	static $StringArray* CLASS_TYPE_NAMES;
	static $StringArray* SHORT_TYPE_NAMES;
	static $shorts* NO_OF_OPERANDS;
	static $Array<int16_t, 2>* TYPE_OF_OPERANDS;
	static $StringArray* OPCODE_NAMES;
	static int32_t OPCODE_NAMES_LENGTH;
	static $ints* CONSUME_STACK;
	static $ints* PRODUCE_STACK;
	static const int8_t ATTR_UNKNOWN = (-1);
	static const int8_t ATTR_SOURCE_FILE = 0;
	static const int8_t ATTR_CONSTANT_VALUE = 1;
	static const int8_t ATTR_CODE = 2;
	static const int8_t ATTR_EXCEPTIONS = 3;
	static const int8_t ATTR_LINE_NUMBER_TABLE = 4;
	static const int8_t ATTR_LOCAL_VARIABLE_TABLE = 5;
	static const int8_t ATTR_INNER_CLASSES = 6;
	static const int8_t ATTR_SYNTHETIC = 7;
	static const int8_t ATTR_DEPRECATED = 8;
	static const int8_t ATTR_PMG = 9;
	static const int8_t ATTR_SIGNATURE = 10;
	static const int8_t ATTR_STACK_MAP = 11;
	static const int8_t ATTR_RUNTIME_VISIBLE_ANNOTATIONS = 12;
	static const int8_t ATTR_RUNTIME_INVISIBLE_ANNOTATIONS = 13;
	static const int8_t ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS = 14;
	static const int8_t ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS = 15;
	static const int8_t ATTR_ANNOTATION_DEFAULT = 16;
	static const int8_t ATTR_LOCAL_VARIABLE_TYPE_TABLE = 17;
	static const int8_t ATTR_ENCLOSING_METHOD = 18;
	static const int8_t ATTR_STACK_MAP_TABLE = 19;
	static const int8_t ATTR_BOOTSTRAP_METHODS = 20;
	static const int8_t ATTR_METHOD_PARAMETERS = 21;
	static const int8_t ATTR_MODULE = 22;
	static const int8_t ATTR_MODULE_PACKAGES = 23;
	static const int8_t ATTR_MODULE_MAIN_CLASS = 24;
	static const int8_t ATTR_NEST_HOST = 25;
	static const int8_t ATTR_NEST_MEMBERS = 26;
	static const int16_t KNOWN_ATTRIBUTES = 27;
	static $StringArray* ATTRIBUTE_NAMES;
	static const int8_t ITEM_Bogus = 0;
	static const int8_t ITEM_Integer = 1;
	static const int8_t ITEM_Float = 2;
	static const int8_t ITEM_Double = 3;
	static const int8_t ITEM_Long = 4;
	static const int8_t ITEM_Null = 5;
	static const int8_t ITEM_InitObject = 6;
	static const int8_t ITEM_Object = 7;
	static const int8_t ITEM_NewObject = 8;
	static $StringArray* ITEM_NAMES;
	static const int32_t SAME_FRAME = 0;
	static const int32_t SAME_LOCALS_1_STACK_ITEM_FRAME = 64;
	static const int32_t SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED = 247;
	static const int32_t CHOP_FRAME = 248;
	static const int32_t SAME_FRAME_EXTENDED = 251;
	static const int32_t APPEND_FRAME = 252;
	static const int32_t FULL_FRAME = 255;
	static const int32_t SAME_FRAME_MAX = 63;
	static const int32_t SAME_LOCALS_1_STACK_ITEM_FRAME_MAX = 127;
	static const int32_t CHOP_FRAME_MAX = 250;
	static const int32_t APPEND_FRAME_MAX = 254;
	static const int8_t REF_getField = 1;
	static const int8_t REF_getStatic = 2;
	static const int8_t REF_putField = 3;
	static const int8_t REF_putStatic = 4;
	static const int8_t REF_invokeVirtual = 5;
	static const int8_t REF_invokeStatic = 6;
	static const int8_t REF_invokeSpecial = 7;
	static const int8_t REF_newInvokeSpecial = 8;
	static const int8_t REF_invokeInterface = 9;
	static $StringArray* METHODHANDLE_NAMES;
};

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("AALOAD")
#pragma pop_macro("AASTORE")
#pragma pop_macro("ACCESS_NAMES")
#pragma pop_macro("ACCESS_NAMES_LENGTH")
#pragma pop_macro("ACC_ABSTRACT")
#pragma pop_macro("ACC_ANNOTATION")
#pragma pop_macro("ACC_BRIDGE")
#pragma pop_macro("ACC_ENUM")
#pragma pop_macro("ACC_FINAL")
#pragma pop_macro("ACC_INTERFACE")
#pragma pop_macro("ACC_MANDATED")
#pragma pop_macro("ACC_MODULE")
#pragma pop_macro("ACC_NATIVE")
#pragma pop_macro("ACC_OPEN")
#pragma pop_macro("ACC_PRIVATE")
#pragma pop_macro("ACC_PROTECTED")
#pragma pop_macro("ACC_PUBLIC")
#pragma pop_macro("ACC_STATIC")
#pragma pop_macro("ACC_STATIC_PHASE")
#pragma pop_macro("ACC_STRICT")
#pragma pop_macro("ACC_SUPER")
#pragma pop_macro("ACC_SYNCHRONIZED")
#pragma pop_macro("ACC_SYNTHETIC")
#pragma pop_macro("ACC_TRANSIENT")
#pragma pop_macro("ACC_TRANSITIVE")
#pragma pop_macro("ACC_VARARGS")
#pragma pop_macro("ACC_VOLATILE")
#pragma pop_macro("ACONST_NULL")
#pragma pop_macro("ALOAD")
#pragma pop_macro("ALOAD_0")
#pragma pop_macro("ALOAD_1")
#pragma pop_macro("ALOAD_2")
#pragma pop_macro("ALOAD_3")
#pragma pop_macro("ANEWARRAY")
#pragma pop_macro("ANEWARRAY_QUICK")
#pragma pop_macro("APPEND_FRAME")
#pragma pop_macro("APPEND_FRAME_MAX")
#pragma pop_macro("ARETURN")
#pragma pop_macro("ARRAYLENGTH")
#pragma pop_macro("ASTORE")
#pragma pop_macro("ASTORE_0")
#pragma pop_macro("ASTORE_1")
#pragma pop_macro("ASTORE_2")
#pragma pop_macro("ASTORE_3")
#pragma pop_macro("ATHROW")
#pragma pop_macro("ATTRIBUTE_NAMES")
#pragma pop_macro("ATTR_ANNOTATION_DEFAULT")
#pragma pop_macro("ATTR_BOOTSTRAP_METHODS")
#pragma pop_macro("ATTR_CODE")
#pragma pop_macro("ATTR_CONSTANT_VALUE")
#pragma pop_macro("ATTR_DEPRECATED")
#pragma pop_macro("ATTR_ENCLOSING_METHOD")
#pragma pop_macro("ATTR_EXCEPTIONS")
#pragma pop_macro("ATTR_INNER_CLASSES")
#pragma pop_macro("ATTR_LINE_NUMBER_TABLE")
#pragma pop_macro("ATTR_LOCAL_VARIABLE_TABLE")
#pragma pop_macro("ATTR_LOCAL_VARIABLE_TYPE_TABLE")
#pragma pop_macro("ATTR_METHOD_PARAMETERS")
#pragma pop_macro("ATTR_MODULE")
#pragma pop_macro("ATTR_MODULE_MAIN_CLASS")
#pragma pop_macro("ATTR_MODULE_PACKAGES")
#pragma pop_macro("ATTR_NEST_HOST")
#pragma pop_macro("ATTR_NEST_MEMBERS")
#pragma pop_macro("ATTR_PMG")
#pragma pop_macro("ATTR_RUNTIME_INVISIBLE_ANNOTATIONS")
#pragma pop_macro("ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS")
#pragma pop_macro("ATTR_RUNTIME_VISIBLE_ANNOTATIONS")
#pragma pop_macro("ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS")
#pragma pop_macro("ATTR_SIGNATURE")
#pragma pop_macro("ATTR_SOURCE_FILE")
#pragma pop_macro("ATTR_STACK_MAP")
#pragma pop_macro("ATTR_STACK_MAP_TABLE")
#pragma pop_macro("ATTR_SYNTHETIC")
#pragma pop_macro("ATTR_UNKNOWN")
#pragma pop_macro("BALOAD")
#pragma pop_macro("BASTORE")
#pragma pop_macro("BIPUSH")
#pragma pop_macro("BREAKPOINT")
#pragma pop_macro("CALOAD")
#pragma pop_macro("CASTORE")
#pragma pop_macro("CHECKCAST")
#pragma pop_macro("CHECKCAST_QUICK")
#pragma pop_macro("CHOP_FRAME")
#pragma pop_macro("CHOP_FRAME_MAX")
#pragma pop_macro("CLASS_TYPE_NAMES")
#pragma pop_macro("CONSTANT_NAMES")
#pragma pop_macro("CONSTRUCTOR_NAME")
#pragma pop_macro("CONSUME_STACK")
#pragma pop_macro("D2F")
#pragma pop_macro("D2I")
#pragma pop_macro("D2L")
#pragma pop_macro("DADD")
#pragma pop_macro("DALOAD")
#pragma pop_macro("DASTORE")
#pragma pop_macro("DCMPG")
#pragma pop_macro("DCMPL")
#pragma pop_macro("DCONST_0")
#pragma pop_macro("DCONST_1")
#pragma pop_macro("DDIV")
#pragma pop_macro("DLOAD")
#pragma pop_macro("DLOAD_0")
#pragma pop_macro("DLOAD_1")
#pragma pop_macro("DLOAD_2")
#pragma pop_macro("DLOAD_3")
#pragma pop_macro("DMUL")
#pragma pop_macro("DNEG")
#pragma pop_macro("DREM")
#pragma pop_macro("DRETURN")
#pragma pop_macro("DSTORE")
#pragma pop_macro("DSTORE_0")
#pragma pop_macro("DSTORE_1")
#pragma pop_macro("DSTORE_2")
#pragma pop_macro("DSTORE_3")
#pragma pop_macro("DSUB")
#pragma pop_macro("DUP")
#pragma pop_macro("DUP2")
#pragma pop_macro("DUP2_X1")
#pragma pop_macro("DUP2_X2")
#pragma pop_macro("DUP_X1")
#pragma pop_macro("DUP_X2")
#pragma pop_macro("F2D")
#pragma pop_macro("F2I")
#pragma pop_macro("F2L")
#pragma pop_macro("FADD")
#pragma pop_macro("FALOAD")
#pragma pop_macro("FASTORE")
#pragma pop_macro("FCMPG")
#pragma pop_macro("FCMPL")
#pragma pop_macro("FCONST_0")
#pragma pop_macro("FCONST_1")
#pragma pop_macro("FCONST_2")
#pragma pop_macro("FDIV")
#pragma pop_macro("FLOAD")
#pragma pop_macro("FLOAD_0")
#pragma pop_macro("FLOAD_1")
#pragma pop_macro("FLOAD_2")
#pragma pop_macro("FLOAD_3")
#pragma pop_macro("FMUL")
#pragma pop_macro("FNEG")
#pragma pop_macro("FREM")
#pragma pop_macro("FRETURN")
#pragma pop_macro("FSTORE")
#pragma pop_macro("FSTORE_0")
#pragma pop_macro("FSTORE_1")
#pragma pop_macro("FSTORE_2")
#pragma pop_macro("FSTORE_3")
#pragma pop_macro("FSUB")
#pragma pop_macro("FULL_FRAME")
#pragma pop_macro("GETFIELD")
#pragma pop_macro("GETFIELD2_QUICK")
#pragma pop_macro("GETFIELD_QUICK")
#pragma pop_macro("GETFIELD_QUICK_W")
#pragma pop_macro("GETSTATIC")
#pragma pop_macro("GETSTATIC2_QUICK")
#pragma pop_macro("GETSTATIC_QUICK")
#pragma pop_macro("GOTO")
#pragma pop_macro("GOTO_W")
#pragma pop_macro("I2B")
#pragma pop_macro("I2C")
#pragma pop_macro("I2D")
#pragma pop_macro("I2F")
#pragma pop_macro("I2L")
#pragma pop_macro("I2S")
#pragma pop_macro("IADD")
#pragma pop_macro("IALOAD")
#pragma pop_macro("IAND")
#pragma pop_macro("IASTORE")
#pragma pop_macro("ICONST_0")
#pragma pop_macro("ICONST_1")
#pragma pop_macro("ICONST_2")
#pragma pop_macro("ICONST_3")
#pragma pop_macro("ICONST_4")
#pragma pop_macro("ICONST_5")
#pragma pop_macro("ICONST_M1")
#pragma pop_macro("IDIV")
#pragma pop_macro("IFEQ")
#pragma pop_macro("IFGE")
#pragma pop_macro("IFGT")
#pragma pop_macro("IFLE")
#pragma pop_macro("IFLT")
#pragma pop_macro("IFNE")
#pragma pop_macro("IFNONNULL")
#pragma pop_macro("IFNULL")
#pragma pop_macro("IF_ACMPEQ")
#pragma pop_macro("IF_ACMPNE")
#pragma pop_macro("IF_ICMPEQ")
#pragma pop_macro("IF_ICMPGE")
#pragma pop_macro("IF_ICMPGT")
#pragma pop_macro("IF_ICMPLE")
#pragma pop_macro("IF_ICMPLT")
#pragma pop_macro("IF_ICMPNE")
#pragma pop_macro("IINC")
#pragma pop_macro("ILLEGAL_OPCODE")
#pragma pop_macro("ILLEGAL_TYPE")
#pragma pop_macro("ILOAD")
#pragma pop_macro("ILOAD_0")
#pragma pop_macro("ILOAD_1")
#pragma pop_macro("ILOAD_2")
#pragma pop_macro("ILOAD_3")
#pragma pop_macro("IMPDEP1")
#pragma pop_macro("IMPDEP2")
#pragma pop_macro("IMUL")
#pragma pop_macro("INEG")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("INSTANCEOF_QUICK")
#pragma pop_macro("INT2BYTE")
#pragma pop_macro("INT2CHAR")
#pragma pop_macro("INT2SHORT")
#pragma pop_macro("INTERFACES_IMPLEMENTED_BY_ARRAYS")
#pragma pop_macro("INVOKEDYNAMIC")
#pragma pop_macro("INVOKEINTERFACE")
#pragma pop_macro("INVOKEINTERFACE_QUICK")
#pragma pop_macro("INVOKENONVIRTUAL")
#pragma pop_macro("INVOKENONVIRTUAL_QUICK")
#pragma pop_macro("INVOKESPECIAL")
#pragma pop_macro("INVOKESTATIC")
#pragma pop_macro("INVOKESTATIC_QUICK")
#pragma pop_macro("INVOKESUPER_QUICK")
#pragma pop_macro("INVOKEVIRTUAL")
#pragma pop_macro("INVOKEVIRTUALOBJECT_QUICK")
#pragma pop_macro("INVOKEVIRTUAL_QUICK")
#pragma pop_macro("INVOKEVIRTUAL_QUICK_W")
#pragma pop_macro("IOR")
#pragma pop_macro("IREM")
#pragma pop_macro("IRETURN")
#pragma pop_macro("ISHL")
#pragma pop_macro("ISHR")
#pragma pop_macro("ISTORE")
#pragma pop_macro("ISTORE_0")
#pragma pop_macro("ISTORE_1")
#pragma pop_macro("ISTORE_2")
#pragma pop_macro("ISTORE_3")
#pragma pop_macro("ISUB")
#pragma pop_macro("ITEM_NAMES")
#pragma pop_macro("IUSHR")
#pragma pop_macro("IXOR")
#pragma pop_macro("JSR")
#pragma pop_macro("JSR_W")
#pragma pop_macro("JVM_CLASSFILE_MAGIC")
#pragma pop_macro("KNOWN_ATTRIBUTES")
#pragma pop_macro("L2D")
#pragma pop_macro("L2F")
#pragma pop_macro("L2I")
#pragma pop_macro("LADD")
#pragma pop_macro("LALOAD")
#pragma pop_macro("LAND")
#pragma pop_macro("LASTORE")
#pragma pop_macro("LCMP")
#pragma pop_macro("LCONST_0")
#pragma pop_macro("LCONST_1")
#pragma pop_macro("LDC")
#pragma pop_macro("LDC2_W")
#pragma pop_macro("LDC2_W_QUICK")
#pragma pop_macro("LDC_QUICK")
#pragma pop_macro("LDC_W")
#pragma pop_macro("LDC_W_QUICK")
#pragma pop_macro("LDIV")
#pragma pop_macro("LLOAD")
#pragma pop_macro("LLOAD_0")
#pragma pop_macro("LLOAD_1")
#pragma pop_macro("LLOAD_2")
#pragma pop_macro("LLOAD_3")
#pragma pop_macro("LMUL")
#pragma pop_macro("LNEG")
#pragma pop_macro("LOOKUPSWITCH")
#pragma pop_macro("LOR")
#pragma pop_macro("LREM")
#pragma pop_macro("LRETURN")
#pragma pop_macro("LSHL")
#pragma pop_macro("LSHR")
#pragma pop_macro("LSTORE")
#pragma pop_macro("LSTORE_0")
#pragma pop_macro("LSTORE_1")
#pragma pop_macro("LSTORE_2")
#pragma pop_macro("LSTORE_3")
#pragma pop_macro("LSUB")
#pragma pop_macro("LUSHR")
#pragma pop_macro("LXOR")
#pragma pop_macro("MAJOR")
#pragma pop_macro("MAJOR_10")
#pragma pop_macro("MAJOR_11")
#pragma pop_macro("MAJOR_12")
#pragma pop_macro("MAJOR_13")
#pragma pop_macro("MAJOR_14")
#pragma pop_macro("MAJOR_1_1")
#pragma pop_macro("MAJOR_1_2")
#pragma pop_macro("MAJOR_1_3")
#pragma pop_macro("MAJOR_1_4")
#pragma pop_macro("MAJOR_1_5")
#pragma pop_macro("MAJOR_1_6")
#pragma pop_macro("MAJOR_1_7")
#pragma pop_macro("MAJOR_1_8")
#pragma pop_macro("MAJOR_1_9")
#pragma pop_macro("MAJOR_9")
#pragma pop_macro("MAX_ACC_FLAG")
#pragma pop_macro("MAX_ACC_FLAG_I")
#pragma pop_macro("MAX_ARRAY_DIMENSIONS")
#pragma pop_macro("MAX_BYTE")
#pragma pop_macro("MAX_CODE_SIZE")
#pragma pop_macro("MAX_CP_ENTRIES")
#pragma pop_macro("MAX_SHORT")
#pragma pop_macro("METHODHANDLE_NAMES")
#pragma pop_macro("MINOR")
#pragma pop_macro("MINOR_10")
#pragma pop_macro("MINOR_11")
#pragma pop_macro("MINOR_12")
#pragma pop_macro("MINOR_13")
#pragma pop_macro("MINOR_14")
#pragma pop_macro("MINOR_1_1")
#pragma pop_macro("MINOR_1_2")
#pragma pop_macro("MINOR_1_3")
#pragma pop_macro("MINOR_1_4")
#pragma pop_macro("MINOR_1_5")
#pragma pop_macro("MINOR_1_6")
#pragma pop_macro("MINOR_1_7")
#pragma pop_macro("MINOR_1_8")
#pragma pop_macro("MINOR_1_9")
#pragma pop_macro("MINOR_9")
#pragma pop_macro("MONITORENTER")
#pragma pop_macro("MONITOREXIT")
#pragma pop_macro("MULTIANEWARRAY")
#pragma pop_macro("MULTIANEWARRAY_QUICK")
#pragma pop_macro("NEW")
#pragma pop_macro("NEWARRAY")
#pragma pop_macro("NEW_QUICK")
#pragma pop_macro("NOP")
#pragma pop_macro("NO_OF_OPERANDS")
#pragma pop_macro("OPCODE_NAMES")
#pragma pop_macro("OPCODE_NAMES_LENGTH")
#pragma pop_macro("POP")
#pragma pop_macro("POP2")
#pragma pop_macro("PRODUCE_STACK")
#pragma pop_macro("PUSH")
#pragma pop_macro("PUTFIELD")
#pragma pop_macro("PUTFIELD2_QUICK")
#pragma pop_macro("PUTFIELD_QUICK")
#pragma pop_macro("PUTFIELD_QUICK_W")
#pragma pop_macro("PUTSTATIC")
#pragma pop_macro("PUTSTATIC2_QUICK")
#pragma pop_macro("PUTSTATIC_QUICK")
#pragma pop_macro("RESERVED")
#pragma pop_macro("RET")
#pragma pop_macro("RETURN")
#pragma pop_macro("SALOAD")
#pragma pop_macro("SAME_FRAME")
#pragma pop_macro("SAME_FRAME_EXTENDED")
#pragma pop_macro("SAME_FRAME_MAX")
#pragma pop_macro("SAME_LOCALS_1_STACK_ITEM_FRAME")
#pragma pop_macro("SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED")
#pragma pop_macro("SAME_LOCALS_1_STACK_ITEM_FRAME_MAX")
#pragma pop_macro("SASTORE")
#pragma pop_macro("SHORT_TYPE_NAMES")
#pragma pop_macro("SIPUSH")
#pragma pop_macro("STATIC_INITIALIZER_NAME")
#pragma pop_macro("SWAP")
#pragma pop_macro("SWITCH")
#pragma pop_macro("TABLESWITCH")
#pragma pop_macro("TYPE_NAMES")
#pragma pop_macro("TYPE_OF_OPERANDS")
#pragma pop_macro("T_ADDRESS")
#pragma pop_macro("T_ARRAY")
#pragma pop_macro("T_BOOLEAN")
#pragma pop_macro("T_BYTE")
#pragma pop_macro("T_CHAR")
#pragma pop_macro("T_DOUBLE")
#pragma pop_macro("T_FLOAT")
#pragma pop_macro("T_INT")
#pragma pop_macro("T_LONG")
#pragma pop_macro("T_OBJECT")
#pragma pop_macro("T_REFERENCE")
#pragma pop_macro("T_SHORT")
#pragma pop_macro("T_UNKNOWN")
#pragma pop_macro("T_VOID")
#pragma pop_macro("UNDEFINED")
#pragma pop_macro("UNPREDICTABLE")
#pragma pop_macro("WIDE")

#endif // _com_sun_org_apache_bcel_internal_Const_h_