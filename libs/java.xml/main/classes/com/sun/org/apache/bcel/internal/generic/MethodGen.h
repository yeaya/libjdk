#ifndef _com_sun_org_apache_bcel_internal_generic_MethodGen_h_
#define _com_sun_org_apache_bcel_internal_generic_MethodGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.MethodGen
//$ extends com.sun.org.apache.bcel.internal.generic.FieldGenOrMethodGen

#include <com/sun/org/apache/bcel/internal/generic/FieldGenOrMethodGen.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationEntry;
							class Attribute;
							class CodeException;
							class ExceptionTable;
							class LineNumberTable;
							class LocalVariableTable;
							class LocalVariableTypeTable;
							class Method;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class AnnotationEntryGen;
							class CodeExceptionGen;
							class ConstantPoolGen;
							class InstructionHandle;
							class InstructionList;
							class LineNumberGen;
							class LocalVariableGen;
							class MethodObserver;
							class ObjectType;
							class Type;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {
							class BCELComparator;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class MethodGen : public ::com::sun::org::apache::bcel::internal::generic::FieldGenOrMethodGen {
	$class(MethodGen, 0, ::com::sun::org::apache::bcel::internal::generic::FieldGenOrMethodGen)
public:
	MethodGen();
	void init$(int32_t access_flags, ::com::sun::org::apache::bcel::internal::generic::Type* return_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* argTypes, $StringArray* argNames, $String* method_name, $String* className, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void init$(::com::sun::org::apache::bcel::internal::classfile::Method* method, $String* className, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual void addAnnotationsAsAttribute(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual void addCodeAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* a);
	virtual void addException($String* className);
	virtual ::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen* addExceptionHandler(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start_pc, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end_pc, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* handler_pc, ::com::sun::org::apache::bcel::internal::generic::ObjectType* catch_type);
	virtual ::com::sun::org::apache::bcel::internal::generic::LineNumberGen* addLineNumber(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, int32_t srcLine);
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* addLocalVariable($String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, int32_t slot, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end, int32_t orig_index);
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* addLocalVariable($String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, int32_t slot, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end);
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* addLocalVariable($String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end);
	virtual void addObserver(::com::sun::org::apache::bcel::internal::generic::MethodObserver* o);
	virtual void addParameterAnnotation(int32_t parameterIndex, ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* annotation);
	virtual void addParameterAnnotationsAsAttribute(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* addRuntimeAnnotationsAsAttribute(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* addRuntimeParameterAnnotationsAsAttribute(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void adjustLocalVariableTypeTable(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* lvt);
	virtual ::com::sun::org::apache::bcel::internal::generic::MethodGen* copy($String* className, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void ensureExistingParameterAnnotationsUnpacked();
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::List* getAnnotationsOnParameter(int32_t i);
	virtual $String* getArgumentName(int32_t i);
	virtual $StringArray* getArgumentNames();
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getArgumentType(int32_t i);
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::Type>* getArgumentTypes();
	static $bytes* getByteCodes(::com::sun::org::apache::bcel::internal::classfile::Method* method);
	virtual $String* getClassName();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getCodeAttributes();
	$Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>* getCodeExceptions();
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* getComparator();
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen>* getExceptionHandlers();
	::com::sun::org::apache::bcel::internal::classfile::ExceptionTable* getExceptionTable(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual $StringArray* getExceptions();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList();
	virtual ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable* getLineNumberTable(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::LineNumberGen>* getLineNumbers();
	virtual ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* getLocalVariableTable(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable* getLocalVariableTypeTable();
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>* getLocalVariables();
	virtual int32_t getMaxLocals();
	virtual int32_t getMaxStack();
	static int32_t getMaxStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il, $Array<::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen>* et);
	virtual ::com::sun::org::apache::bcel::internal::classfile::Method* getMethod();
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getReturnType();
	virtual $String* getSignature() override;
	virtual int32_t hashCode() override;
	static int32_t lambda$getLocalVariables$0(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* o1, ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* o2);
	::java::util::List* makeMutableVersion($Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* mutableArray);
	virtual void removeCodeAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* a);
	virtual void removeCodeAttributes();
	virtual void removeException($String* c);
	virtual void removeExceptionHandler(::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen* c);
	virtual void removeExceptionHandlers();
	virtual void removeExceptions();
	virtual void removeLineNumber(::com::sun::org::apache::bcel::internal::generic::LineNumberGen* l);
	virtual void removeLineNumbers();
	virtual void removeLocalVariable(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* l);
	virtual void removeLocalVariableTypeTable();
	virtual void removeLocalVariables();
	virtual void removeNOPs();
	virtual void removeObserver(::com::sun::org::apache::bcel::internal::generic::MethodObserver* o);
	virtual void removeRuntimeAttributes($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attrs);
	virtual void setArgumentName(int32_t i, $String* name);
	virtual void setArgumentNames($StringArray* arg_names);
	virtual void setArgumentType(int32_t i, ::com::sun::org::apache::bcel::internal::generic::Type* type);
	virtual void setArgumentTypes($Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types);
	virtual void setClassName($String* class_name);
	static void setComparator(::com::sun::org::apache::bcel::internal::util::BCELComparator* comparator);
	virtual void setInstructionList(::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	virtual void setMaxLocals(int32_t m);
	virtual void setMaxLocals();
	virtual void setMaxStack(int32_t m);
	virtual void setMaxStack();
	virtual void setReturnType(::com::sun::org::apache::bcel::internal::generic::Type* return_type);
	virtual void stripAttributes(bool flag);
	virtual $String* toString() override;
	virtual void update();
	void updateLocalVariableTable(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* a);
	$String* className = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::generic::Type>* argTypes = nullptr;
	$StringArray* argNames = nullptr;
	int32_t maxLocals = 0;
	int32_t maxStack = 0;
	::com::sun::org::apache::bcel::internal::generic::InstructionList* il = nullptr;
	bool stripAttributes$ = false;
	::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable* localVariableTypeTable = nullptr;
	::java::util::List* variableList = nullptr;
	::java::util::List* lineNumberList = nullptr;
	::java::util::List* exceptionList = nullptr;
	::java::util::List* throwsList = nullptr;
	::java::util::List* codeAttrsList = nullptr;
	$Array<::java::util::List>* paramAnnotations = nullptr;
	bool hasParameterAnnotations = false;
	bool haveUnpackedParameterAnnotations = false;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* bcelComparator;
	::java::util::List* observers = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_MethodGen_h_