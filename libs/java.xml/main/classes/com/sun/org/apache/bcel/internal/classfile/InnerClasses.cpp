#include <com/sun/org/apache/bcel/internal/classfile/InnerClasses.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_INNER_CLASSES

using $InnerClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::InnerClass>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $InnerClass = ::com::sun::org::apache::bcel::internal::classfile::InnerClass;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
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
						namespace classfile {

$FieldInfo _InnerClasses_FieldInfo_[] = {
	{"innerClasses", "[Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;", nullptr, $PRIVATE, $field(InnerClasses, innerClasses)},
	{}
};

$MethodInfo _InnerClasses_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClasses;)V", nullptr, $PUBLIC, $method(InnerClasses, init$, void, InnerClasses*)},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(InnerClasses, init$, void, int32_t, int32_t, $InnerClassArray*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(InnerClasses, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(InnerClasses, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(InnerClasses, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(InnerClasses, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getInnerClasses", "()[Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;", nullptr, $PUBLIC, $method(InnerClasses, getInnerClasses, $InnerClassArray*)},
	{"setInnerClasses", "([Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC, $method(InnerClasses, setInnerClasses, void, $InnerClassArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InnerClasses, toString, $String*)},
	{}
};

$ClassInfo _InnerClasses_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.InnerClasses",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_InnerClasses_FieldInfo_,
	_InnerClasses_MethodInfo_
};

$Object* allocate$InnerClasses($Class* clazz) {
	return $of($alloc(InnerClasses));
}

void InnerClasses::init$(InnerClasses* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($InnerClassArray, var$2, c->getInnerClasses());
	InnerClasses::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void InnerClasses::init$(int32_t name_index, int32_t length, $InnerClassArray* innerClasses, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_INNER_CLASSES, name_index, length, constant_pool);
	$set(this, innerClasses, innerClasses != nullptr ? innerClasses : $new($InnerClassArray, 0));
}

void InnerClasses::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	InnerClasses::init$(name_index, length, ($InnerClassArray*)nullptr, constant_pool);
	int32_t number_of_classes = $nc(input)->readUnsignedShort();
	$set(this, innerClasses, $new($InnerClassArray, number_of_classes));
	for (int32_t i = 0; i < number_of_classes; ++i) {
		$nc(this->innerClasses)->set(i, $$new($InnerClass, input));
	}
}

void InnerClasses::accept($Visitor* v) {
	$nc(v)->visitInnerClasses(this);
}

void InnerClasses::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->innerClasses)->length);
	{
		$var($InnerClassArray, arr$, this->innerClasses);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InnerClass, inner_class, arr$->get(i$));
			{
				$nc(inner_class)->dump(file);
			}
		}
	}
}

$InnerClassArray* InnerClasses::getInnerClasses() {
	return this->innerClasses;
}

void InnerClasses::setInnerClasses($InnerClassArray* innerClasses) {
	$set(this, innerClasses, innerClasses != nullptr ? innerClasses : $new($InnerClassArray, 0));
}

$String* InnerClasses::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("InnerClasses("_s);
	buf->append($nc(this->innerClasses)->length);
	buf->append("):\n"_s);
	{
		$var($InnerClassArray, arr$, this->innerClasses);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InnerClass, inner_class, arr$->get(i$));
			{
				buf->append($($nc(inner_class)->toString($($Attribute::getConstantPool()))))->append("\n"_s);
			}
		}
	}
	return buf->substring(0, buf->length() - 1);
}

$Attribute* InnerClasses::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(InnerClasses, c, $cast(InnerClasses, clone()));
	$set($nc(c), innerClasses, $new($InnerClassArray, $nc(this->innerClasses)->length));
	for (int32_t i = 0; i < $nc(this->innerClasses)->length; ++i) {
		$nc(c->innerClasses)->set(i, $($nc($nc(this->innerClasses)->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

InnerClasses::InnerClasses() {
}

$Class* InnerClasses::load$($String* name, bool initialize) {
	$loadClass(InnerClasses, name, initialize, &_InnerClasses_ClassInfo_, allocate$InnerClasses);
	return class$;
}

$Class* InnerClasses::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com