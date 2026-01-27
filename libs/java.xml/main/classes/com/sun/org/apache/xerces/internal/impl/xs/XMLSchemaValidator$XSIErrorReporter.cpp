#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$XSIErrorReporter.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator$XSIErrorReporter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $FINAL | $SYNTHETIC, $field(XMLSchemaValidator$XSIErrorReporter, this$0)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, 0, $field(XMLSchemaValidator$XSIErrorReporter, fErrorReporter)},
	{"fErrors", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", 0, $field(XMLSchemaValidator$XSIErrorReporter, fErrors)},
	{"fContext", "[I", nullptr, 0, $field(XMLSchemaValidator$XSIErrorReporter, fContext)},
	{"fContextCount", "I", nullptr, 0, $field(XMLSchemaValidator$XSIErrorReporter, fContextCount)},
	{}
};

$MethodInfo _XMLSchemaValidator$XSIErrorReporter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;)V", nullptr, $PROTECTED, $method(XMLSchemaValidator$XSIErrorReporter, init$, void, $XMLSchemaValidator*)},
	{"mergeContext", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSchemaValidator$XSIErrorReporter, mergeContext, $StringArray*)},
	{"popContext", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSchemaValidator$XSIErrorReporter, popContext, $StringArray*)},
	{"pushContext", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidator$XSIErrorReporter, pushContext, void)},
	{"reportError", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;S)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$XSIErrorReporter, reportError, void, $String*, $String*, $ObjectArray*, int16_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;S)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$XSIErrorReporter, reportError, void, $XMLLocator*, $String*, $String*, $ObjectArray*, int16_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$XSIErrorReporter, reset, void, $XMLErrorReporter*)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$XSIErrorReporter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XSIErrorReporter", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "XSIErrorReporter", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _XMLSchemaValidator$XSIErrorReporter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XSIErrorReporter",
	"java.lang.Object",
	nullptr,
	_XMLSchemaValidator$XSIErrorReporter_FieldInfo_,
	_XMLSchemaValidator$XSIErrorReporter_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$XSIErrorReporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$XSIErrorReporter($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$XSIErrorReporter));
}

void XMLSchemaValidator$XSIErrorReporter::init$($XMLSchemaValidator* this$0) {
	$set(this, this$0, this$0);
	$set(this, fErrors, $new($Vector));
	$set(this, fContext, $new($ints, 8));
}

void XMLSchemaValidator$XSIErrorReporter::reset($XMLErrorReporter* errorReporter) {
	$set(this, fErrorReporter, errorReporter);
	$nc(this->fErrors)->removeAllElements();
	this->fContextCount = 0;
}

void XMLSchemaValidator$XSIErrorReporter::pushContext() {
	if (!this->this$0->fAugPSVI) {
		return;
	}
	if (this->fContextCount == $nc(this->fContext)->length) {
		int32_t newSize = this->fContextCount + 8;
		$var($ints, newArray, $new($ints, newSize));
		$System::arraycopy(this->fContext, 0, newArray, 0, this->fContextCount);
		$set(this, fContext, newArray);
	}
	$nc(this->fContext)->set(this->fContextCount++, $nc(this->fErrors)->size());
}

$StringArray* XMLSchemaValidator$XSIErrorReporter::popContext() {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->fAugPSVI) {
		return nullptr;
	}
	int32_t contextPos = $nc(this->fContext)->get(--this->fContextCount);
	int32_t size = $nc(this->fErrors)->size() - contextPos;
	if (size == 0) {
		return nullptr;
	}
	$var($StringArray, errors, $new($StringArray, size));
	for (int32_t i = 0; i < size; ++i) {
		errors->set(i, $cast($String, $($nc(this->fErrors)->get(contextPos + i))));
	}
	$nc(this->fErrors)->setSize(contextPos);
	return errors;
}

$StringArray* XMLSchemaValidator$XSIErrorReporter::mergeContext() {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->fAugPSVI) {
		return nullptr;
	}
	int32_t contextPos = $nc(this->fContext)->get(--this->fContextCount);
	int32_t size = $nc(this->fErrors)->size() - contextPos;
	if (size == 0) {
		return nullptr;
	}
	$var($StringArray, errors, $new($StringArray, size));
	for (int32_t i = 0; i < size; ++i) {
		errors->set(i, $cast($String, $($nc(this->fErrors)->get(contextPos + i))));
	}
	return errors;
}

void XMLSchemaValidator$XSIErrorReporter::reportError($String* domain, $String* key, $ObjectArray* arguments, int16_t severity) {
	$var($String, message, $nc(this->fErrorReporter)->reportError(domain, key, arguments, severity));
	if (this->this$0->fAugPSVI) {
		$nc(this->fErrors)->add(key);
		$nc(this->fErrors)->add(message);
	}
}

void XMLSchemaValidator$XSIErrorReporter::reportError($XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity) {
	$var($String, message, $nc(this->fErrorReporter)->reportError(location, domain, key, arguments, severity));
	if (this->this$0->fAugPSVI) {
		$nc(this->fErrors)->add(key);
		$nc(this->fErrors)->add(message);
	}
}

XMLSchemaValidator$XSIErrorReporter::XMLSchemaValidator$XSIErrorReporter() {
}

$Class* XMLSchemaValidator$XSIErrorReporter::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$XSIErrorReporter, name, initialize, &_XMLSchemaValidator$XSIErrorReporter_ClassInfo_, allocate$XMLSchemaValidator$XSIErrorReporter);
	return class$;
}

$Class* XMLSchemaValidator$XSIErrorReporter::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com