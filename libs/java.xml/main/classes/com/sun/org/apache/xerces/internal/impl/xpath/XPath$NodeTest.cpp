#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

#undef NAMESPACE
#undef NODE
#undef QNAME
#undef WILDCARD

using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
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
							namespace xpath {

$FieldInfo _XPath$NodeTest_FieldInfo_[] = {
	{"QNAME", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$NodeTest, QNAME)},
	{"WILDCARD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$NodeTest, WILDCARD)},
	{"NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$NodeTest, NODE)},
	{"NAMESPACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$NodeTest, NAMESPACE)},
	{"type", "S", nullptr, $PUBLIC | $FINAL, $field(XPath$NodeTest, type)},
	{"name", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $FINAL, $field(XPath$NodeTest, name)},
	{}
};

$MethodInfo _XPath$NodeTest_MethodInfo_[] = {
	{"<init>", "(S)V", nullptr, $PUBLIC, $method(XPath$NodeTest, init$, void, int16_t)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $method(XPath$NodeTest, init$, void, $QName*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPath$NodeTest, init$, void, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest;)V", nullptr, $PUBLIC, $method(XPath$NodeTest, init$, void, XPath$NodeTest*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPath$NodeTest, clone, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPath$NodeTest, toString, $String*)},
	{}
};

$InnerClassInfo _XPath$NodeTest_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$NodeTest", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "NodeTest", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPath$NodeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$NodeTest",
	"java.lang.Object",
	"java.lang.Cloneable",
	_XPath$NodeTest_FieldInfo_,
	_XPath$NodeTest_MethodInfo_,
	nullptr,
	nullptr,
	_XPath$NodeTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$NodeTest($Class* clazz) {
	return $of($alloc(XPath$NodeTest));
}

void XPath$NodeTest::init$(int16_t type) {
	$set(this, name, $new($QName));
	this->type = type;
}

void XPath$NodeTest::init$($QName* name) {
	$set(this, name, $new($QName));
	this->type = XPath$NodeTest::QNAME;
	$nc(this->name)->setValues(name);
}

void XPath$NodeTest::init$($String* prefix, $String* uri) {
	$set(this, name, $new($QName));
	this->type = XPath$NodeTest::NAMESPACE;
	$nc(this->name)->setValues(prefix, nullptr, nullptr, uri);
}

void XPath$NodeTest::init$(XPath$NodeTest* nodeTest) {
	$set(this, name, $new($QName));
	this->type = $nc(nodeTest)->type;
	$nc(this->name)->setValues(nodeTest->name);
}

$String* XPath$NodeTest::toString() {
	$useLocalCurrentObjectStackCache();
	switch (this->type) {
	case XPath$NodeTest::QNAME:
		{
			{
				if ($nc($nc(this->name)->prefix)->length() != 0) {
					if ($nc(this->name)->uri != nullptr) {
						return $str({$nc(this->name)->prefix, $$str(u':'), $nc(this->name)->localpart});
					}
					return $str({"{"_s, $nc(this->name)->uri, $$str(u'}'), $nc(this->name)->prefix, $$str(u':'), $nc(this->name)->localpart});
				}
				return $nc(this->name)->localpart;
			}
		}
	case XPath$NodeTest::NAMESPACE:
		{
			{
				if ($nc($nc(this->name)->prefix)->length() != 0) {
					if ($nc(this->name)->uri != nullptr) {
						return $str({$nc(this->name)->prefix, ":*"_s});
					}
					return $str({"{"_s, $nc(this->name)->uri, $$str(u'}'), $nc(this->name)->prefix, ":*"_s});
				}
				return "???:*"_s;
			}
		}
	case XPath$NodeTest::WILDCARD:
		{
			{
				return "*"_s;
			}
		}
	case XPath$NodeTest::NODE:
		{
			{
				return "node()"_s;
			}
		}
	}
	return "???"_s;
}

$Object* XPath$NodeTest::clone() {
	return $of($new(XPath$NodeTest, this));
}

XPath$NodeTest::XPath$NodeTest() {
}

$Class* XPath$NodeTest::load$($String* name, bool initialize) {
	$loadClass(XPath$NodeTest, name, initialize, &_XPath$NodeTest_ClassInfo_, allocate$XPath$NodeTest);
	return class$;
}

$Class* XPath$NodeTest::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com