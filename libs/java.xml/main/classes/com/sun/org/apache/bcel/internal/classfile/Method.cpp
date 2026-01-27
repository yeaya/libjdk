#include <com/sun/org/apache/bcel/internal/classfile/Method.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method$1.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <java/io/DataInput.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $ParameterAnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::classfile::FieldOrMethod;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $Method$1 = ::com::sun::org::apache::bcel::internal::classfile::Method$1;
using $ParameterAnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Method_FieldInfo_[] = {
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(Method, bcelComparator)},
	{"parameterAnnotationEntries", "[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;", nullptr, $PRIVATE, $field(Method, parameterAnnotationEntries)},
	{}
};

$MethodInfo _Method_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Method, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $method(Method, init$, void, Method*)},
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(Method, init$, void, $DataInput*, $ConstantPool*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"<init>", "(III[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(Method, init$, void, int32_t, int32_t, int32_t, $AttributeArray*, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Method, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $method(Method, copy, Method*, $ConstantPool*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Method, equals, bool, Object$*)},
	{"getArgumentTypes", "()[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $method(Method, getArgumentTypes, $TypeArray*)},
	{"getCode", "()Lcom/sun/org/apache/bcel/internal/classfile/Code;", nullptr, $PUBLIC, $method(Method, getCode, $Code*)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(Method, getComparator, $BCELComparator*)},
	{"getExceptionTable", "()Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;", nullptr, $PUBLIC, $method(Method, getExceptionTable, $ExceptionTable*)},
	{"getLineNumberTable", "()Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;", nullptr, $PUBLIC, $method(Method, getLineNumberTable, $LineNumberTable*)},
	{"getLocalVariableTable", "()Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;", nullptr, $PUBLIC, $method(Method, getLocalVariableTable, $LocalVariableTable*)},
	{"getParameterAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;", nullptr, $PUBLIC, $method(Method, getParameterAnnotationEntries, $ParameterAnnotationEntryArray*)},
	{"getReturnType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $method(Method, getReturnType, $Type*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Method, hashCode, int32_t)},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Method, setComparator, void, $BCELComparator*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Method, toString, $String*)},
	{}
};

$InnerClassInfo _Method_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Method$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Method_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Method",
	"com.sun.org.apache.bcel.internal.classfile.FieldOrMethod",
	nullptr,
	_Method_FieldInfo_,
	_Method_MethodInfo_,
	nullptr,
	nullptr,
	_Method_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Method$1"
};

$Object* allocate$Method($Class* clazz) {
	return $of($alloc(Method));
}

$BCELComparator* Method::bcelComparator = nullptr;

void Method::init$() {
	$FieldOrMethod::init$();
}

void Method::init$(Method* c) {
	$FieldOrMethod::init$(c);
}

void Method::init$($DataInput* file, $ConstantPool* constant_pool) {
	$FieldOrMethod::init$(file, constant_pool);
}

void Method::init$(int32_t access_flags, int32_t name_index, int32_t signature_index, $AttributeArray* attributes, $ConstantPool* constant_pool) {
	$FieldOrMethod::init$(access_flags, name_index, signature_index, attributes, constant_pool);
}

void Method::accept($Visitor* v) {
	$nc(v)->visitMethod(this);
}

$Code* Method::getCode() {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, $FieldOrMethod::getAttributes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($Code, attribute)) {
					return $cast($Code, attribute);
				}
			}
		}
	}
	return nullptr;
}

$ExceptionTable* Method::getExceptionTable() {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, $FieldOrMethod::getAttributes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($ExceptionTable, attribute)) {
					return $cast($ExceptionTable, attribute);
				}
			}
		}
	}
	return nullptr;
}

$LocalVariableTable* Method::getLocalVariableTable() {
	$var($Code, code, getCode());
	if (code == nullptr) {
		return nullptr;
	}
	return $nc(code)->getLocalVariableTable();
}

$LineNumberTable* Method::getLineNumberTable() {
	$var($Code, code, getCode());
	if (code == nullptr) {
		return nullptr;
	}
	return $nc(code)->getLineNumberTable();
}

$String* Method::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, access, $Utility::accessToString($FieldOrMethod::getAccessFlags()));
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($FieldOrMethod::getConstantPool()))->getConstant($FieldOrMethod::getSignatureIndex(), $Const::CONSTANT_Utf8)));
	$var($String, signature, $nc(c)->getBytes());
	$assign(c, $cast($ConstantUtf8, $nc($($FieldOrMethod::getConstantPool()))->getConstant($FieldOrMethod::getNameIndex(), $Const::CONSTANT_Utf8)));
	$var($String, name, c->getBytes());
	$assign(signature, $Utility::methodSignatureToString(signature, name, access, true, $(getLocalVariableTable())));
	$var($StringBuilder, buf, $new($StringBuilder, signature));
	{
		$var($AttributeArray, arr$, $FieldOrMethod::getAttributes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if (!(($instanceOf($Code, attribute)) || ($instanceOf($ExceptionTable, attribute)))) {
					buf->append(" ["_s)->append($of(attribute))->append("]"_s);
				}
			}
		}
	}
	$var($ExceptionTable, e, getExceptionTable());
	if (e != nullptr) {
		$var($String, str, e->toString());
		if (!$nc(str)->isEmpty()) {
			buf->append("\n\t\tthrows "_s)->append(str);
		}
	}
	return buf->toString();
}

Method* Method::copy($ConstantPool* _constant_pool) {
	return $cast(Method, copy_(_constant_pool));
}

$Type* Method::getReturnType() {
	return $Type::getReturnType($(getSignature()));
}

$TypeArray* Method::getArgumentTypes() {
	return $Type::getArgumentTypes($(getSignature()));
}

$BCELComparator* Method::getComparator() {
	$init(Method);
	return Method::bcelComparator;
}

void Method::setComparator($BCELComparator* comparator) {
	$init(Method);
	$assignStatic(Method::bcelComparator, comparator);
}

bool Method::equals(Object$* obj) {
	return $nc(Method::bcelComparator)->equals(this, obj);
}

int32_t Method::hashCode() {
	return $nc(Method::bcelComparator)->hashCode(this);
}

$ParameterAnnotationEntryArray* Method::getParameterAnnotationEntries() {
	if (this->parameterAnnotationEntries == nullptr) {
		$set(this, parameterAnnotationEntries, $ParameterAnnotationEntry::createParameterAnnotationEntries($(getAttributes())));
	}
	return this->parameterAnnotationEntries;
}

void clinit$Method($Class* class$) {
	$assignStatic(Method::bcelComparator, $new($Method$1));
}

Method::Method() {
}

$Class* Method::load$($String* name, bool initialize) {
	$loadClass(Method, name, initialize, &_Method_ClassInfo_, clinit$Method, allocate$Method);
	return class$;
}

$Class* Method::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com