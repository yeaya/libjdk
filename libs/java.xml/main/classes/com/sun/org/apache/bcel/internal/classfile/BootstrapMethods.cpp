#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethods.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethod.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_BOOTSTRAP_METHODS

using $BootstrapMethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $BootstrapMethod = ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
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

$FieldInfo _BootstrapMethods_FieldInfo_[] = {
	{"bootstrapMethods", "[Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethod;", nullptr, $PRIVATE, $field(BootstrapMethods, bootstrapMethods)},
	{}
};

$MethodInfo _BootstrapMethods_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;)V", nullptr, $PUBLIC, $method(BootstrapMethods, init$, void, BootstrapMethods*)},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethod;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(BootstrapMethods, init$, void, int32_t, int32_t, $BootstrapMethodArray*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(BootstrapMethods, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(BootstrapMethods, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;", nullptr, $PUBLIC, $virtualMethod(BootstrapMethods, copy, BootstrapMethods*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(BootstrapMethods, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBootstrapMethods", "()[Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethod;", nullptr, $PUBLIC | $FINAL, $method(BootstrapMethods, getBootstrapMethods, $BootstrapMethodArray*)},
	{"setBootstrapMethods", "([Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethod;)V", nullptr, $PUBLIC | $FINAL, $method(BootstrapMethods, setBootstrapMethods, void, $BootstrapMethodArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(BootstrapMethods, toString, $String*)},
	{}
};

$ClassInfo _BootstrapMethods_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.BootstrapMethods",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_BootstrapMethods_FieldInfo_,
	_BootstrapMethods_MethodInfo_
};

$Object* allocate$BootstrapMethods($Class* clazz) {
	return $of($alloc(BootstrapMethods));
}

void BootstrapMethods::init$(BootstrapMethods* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($BootstrapMethodArray, var$2, c->getBootstrapMethods());
	BootstrapMethods::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void BootstrapMethods::init$(int32_t name_index, int32_t length, $BootstrapMethodArray* bootstrapMethods, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_BOOTSTRAP_METHODS, name_index, length, constant_pool);
	$set(this, bootstrapMethods, bootstrapMethods);
}

void BootstrapMethods::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	BootstrapMethods::init$(name_index, length, ($BootstrapMethodArray*)nullptr, constant_pool);
	int32_t num_bootstrap_methods = $nc(input)->readUnsignedShort();
	$set(this, bootstrapMethods, $new($BootstrapMethodArray, num_bootstrap_methods));
	for (int32_t i = 0; i < num_bootstrap_methods; ++i) {
		$nc(this->bootstrapMethods)->set(i, $$new($BootstrapMethod, input));
	}
}

$BootstrapMethodArray* BootstrapMethods::getBootstrapMethods() {
	return this->bootstrapMethods;
}

void BootstrapMethods::setBootstrapMethods($BootstrapMethodArray* bootstrapMethods) {
	$set(this, bootstrapMethods, bootstrapMethods);
}

void BootstrapMethods::accept($Visitor* v) {
	$nc(v)->visitBootstrapMethods(this);
}

BootstrapMethods* BootstrapMethods::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(BootstrapMethods, c, $cast(BootstrapMethods, clone()));
	$set($nc(c), bootstrapMethods, $new($BootstrapMethodArray, $nc(this->bootstrapMethods)->length));
	for (int32_t i = 0; i < $nc(this->bootstrapMethods)->length; ++i) {
		$nc(c->bootstrapMethods)->set(i, $($nc($nc(this->bootstrapMethods)->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

void BootstrapMethods::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->bootstrapMethods)->length);
	{
		$var($BootstrapMethodArray, arr$, this->bootstrapMethods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BootstrapMethod, bootstrap_method, arr$->get(i$));
			{
				$nc(bootstrap_method)->dump(file);
			}
		}
	}
}

$String* BootstrapMethods::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("BootstrapMethods("_s);
	buf->append($nc(this->bootstrapMethods)->length);
	buf->append("):"_s);
	for (int32_t i = 0; i < $nc(this->bootstrapMethods)->length; ++i) {
		buf->append("\n"_s);
		int32_t start = buf->length();
		buf->append("  "_s)->append(i)->append(": "_s);
		int32_t indent_count = buf->length() - start;
		$var($StringArray, lines, $nc(($($nc($nc(this->bootstrapMethods)->get(i))->toString($($Attribute::getConstantPool())))))->split("\\r?\\n"_s));
		buf->append(lines->get(0));
		for (int32_t j = 1; j < lines->length; ++j) {
			buf->append("\n"_s)->append($("          "_s->substring(0, indent_count)))->append(lines->get(j));
		}
	}
	return buf->toString();
}

BootstrapMethods::BootstrapMethods() {
}

$Class* BootstrapMethods::load$($String* name, bool initialize) {
	$loadClass(BootstrapMethods, name, initialize, &_BootstrapMethods_ClassInfo_, allocate$BootstrapMethods);
	return class$;
}

$Class* BootstrapMethods::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com