#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec$Provider.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_ANY
#undef CONTENTSPECNODE_ANY_LAX
#undef CONTENTSPECNODE_ANY_LOCAL
#undef CONTENTSPECNODE_ANY_LOCAL_LAX
#undef CONTENTSPECNODE_ANY_LOCAL_SKIP
#undef CONTENTSPECNODE_ANY_OTHER
#undef CONTENTSPECNODE_ANY_OTHER_LAX
#undef CONTENTSPECNODE_ANY_OTHER_SKIP
#undef CONTENTSPECNODE_ANY_SKIP
#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_LEAF
#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_SEQ
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE

using $XMLContentSpec$Provider = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec$Provider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLContentSpec_FieldInfo_[] = {
	{"CONTENTSPECNODE_LEAF", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_LEAF)},
	{"CONTENTSPECNODE_ZERO_OR_ONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ZERO_OR_ONE)},
	{"CONTENTSPECNODE_ZERO_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ZERO_OR_MORE)},
	{"CONTENTSPECNODE_ONE_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ONE_OR_MORE)},
	{"CONTENTSPECNODE_CHOICE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_CHOICE)},
	{"CONTENTSPECNODE_SEQ", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_SEQ)},
	{"CONTENTSPECNODE_ANY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY)},
	{"CONTENTSPECNODE_ANY_OTHER", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_OTHER)},
	{"CONTENTSPECNODE_ANY_LOCAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_LOCAL)},
	{"CONTENTSPECNODE_ANY_LAX", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_LAX)},
	{"CONTENTSPECNODE_ANY_OTHER_LAX", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_OTHER_LAX)},
	{"CONTENTSPECNODE_ANY_LOCAL_LAX", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_LOCAL_LAX)},
	{"CONTENTSPECNODE_ANY_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_SKIP)},
	{"CONTENTSPECNODE_ANY_OTHER_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_OTHER_SKIP)},
	{"CONTENTSPECNODE_ANY_LOCAL_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLContentSpec, CONTENTSPECNODE_ANY_LOCAL_SKIP)},
	{"type", "S", nullptr, $PUBLIC, $field(XMLContentSpec, type)},
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XMLContentSpec, value)},
	{"otherValue", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XMLContentSpec, otherValue)},
	{}
};

$MethodInfo _XMLContentSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLContentSpec, init$, void)},
	{"<init>", "(SLjava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XMLContentSpec, init$, void, int16_t, Object$*, Object$*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)V", nullptr, $PUBLIC, $method(XMLContentSpec, init$, void, XMLContentSpec*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec$Provider;I)V", nullptr, $PUBLIC, $method(XMLContentSpec, init$, void, $XMLContentSpec$Provider*, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLContentSpec, clear, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLContentSpec, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XMLContentSpec, hashCode, int32_t)},
	{"setValues", "(SLjava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLContentSpec, setValues, void, int16_t, Object$*, Object$*)},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)V", nullptr, $PUBLIC, $virtualMethod(XMLContentSpec, setValues, void, XMLContentSpec*)},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec$Provider;I)V", nullptr, $PUBLIC, $virtualMethod(XMLContentSpec, setValues, void, $XMLContentSpec$Provider*, int32_t)},
	{}
};

$InnerClassInfo _XMLContentSpec_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider", "com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLContentSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec",
	"java.lang.Object",
	nullptr,
	_XMLContentSpec_FieldInfo_,
	_XMLContentSpec_MethodInfo_,
	nullptr,
	nullptr,
	_XMLContentSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider"
};

$Object* allocate$XMLContentSpec($Class* clazz) {
	return $of($alloc(XMLContentSpec));
}

void XMLContentSpec::init$() {
	clear();
}

void XMLContentSpec::init$(int16_t type, Object$* value, Object$* otherValue) {
	setValues(type, value, otherValue);
}

void XMLContentSpec::init$(XMLContentSpec* contentSpec) {
	setValues(contentSpec);
}

void XMLContentSpec::init$($XMLContentSpec$Provider* provider, int32_t contentSpecIndex) {
	setValues(provider, contentSpecIndex);
}

void XMLContentSpec::clear() {
	this->type = (int16_t)-1;
	$set(this, value, nullptr);
	$set(this, otherValue, nullptr);
}

void XMLContentSpec::setValues(int16_t type, Object$* value, Object$* otherValue) {
	this->type = type;
	$set(this, value, value);
	$set(this, otherValue, otherValue);
}

void XMLContentSpec::setValues(XMLContentSpec* contentSpec) {
	this->type = $nc(contentSpec)->type;
	$set(this, value, contentSpec->value);
	$set(this, otherValue, contentSpec->otherValue);
}

void XMLContentSpec::setValues($XMLContentSpec$Provider* provider, int32_t contentSpecIndex) {
	if (!$nc(provider)->getContentSpec(contentSpecIndex, this)) {
		clear();
	}
}

int32_t XMLContentSpec::hashCode() {
	int32_t var$0 = (this->type << 16) | ($nc($of(this->value))->hashCode() << 8);
	return var$0 | $nc($of(this->otherValue))->hashCode();
}

bool XMLContentSpec::equals(Object$* object) {
	if (object != nullptr && $instanceOf(XMLContentSpec, object)) {
		$var(XMLContentSpec, contentSpec, $cast(XMLContentSpec, object));
		return this->type == contentSpec->type && $equals(this->value, contentSpec->value) && $equals(this->otherValue, contentSpec->otherValue);
	}
	return false;
}

XMLContentSpec::XMLContentSpec() {
}

$Class* XMLContentSpec::load$($String* name, bool initialize) {
	$loadClass(XMLContentSpec, name, initialize, &_XMLContentSpec_ClassInfo_, allocate$XMLContentSpec);
	return class$;
}

$Class* XMLContentSpec::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com