#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _SimpleLocator_FieldInfo_[] = {
	{"lsid", "Ljava/lang/String;", nullptr, 0, $field(SimpleLocator, lsid)},
	{"esid", "Ljava/lang/String;", nullptr, 0, $field(SimpleLocator, esid)},
	{"line", "I", nullptr, 0, $field(SimpleLocator, line)},
	{"column", "I", nullptr, 0, $field(SimpleLocator, column)},
	{"charOffset", "I", nullptr, 0, $field(SimpleLocator, charOffset)},
	{}
};

$MethodInfo _SimpleLocator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleLocator, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(SimpleLocator, init$, void, $String*, $String*, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(SimpleLocator, init$, void, $String*, $String*, int32_t, int32_t, int32_t)},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getBaseSystemId, $String*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getColumnNumber, int32_t)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getEncoding, $String*)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getExpandedSystemId, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getLineNumber, int32_t)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getLiteralSystemId, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getPublicId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, getXMLVersion, $String*)},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setBaseSystemId, void, $String*)},
	{"setCharacterOffset", "(I)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setCharacterOffset, void, int32_t)},
	{"setColumnNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setColumnNumber, void, int32_t)},
	{"setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setExpandedSystemId, void, $String*)},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setLineNumber, void, int32_t)},
	{"setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setLiteralSystemId, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setPublicId, void, $String*)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setValues, void, $String*, $String*, int32_t, int32_t)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;III)V", nullptr, $PUBLIC, $virtualMethod(SimpleLocator, setValues, void, $String*, $String*, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _SimpleLocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.SimpleLocator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_SimpleLocator_FieldInfo_,
	_SimpleLocator_MethodInfo_
};

$Object* allocate$SimpleLocator($Class* clazz) {
	return $of($alloc(SimpleLocator));
}

void SimpleLocator::init$() {
}

void SimpleLocator::init$($String* lsid, $String* esid, int32_t line, int32_t column) {
	SimpleLocator::init$(lsid, esid, line, column, -1);
}

void SimpleLocator::setValues($String* lsid, $String* esid, int32_t line, int32_t column) {
	setValues(lsid, esid, line, column, -1);
}

void SimpleLocator::init$($String* lsid, $String* esid, int32_t line, int32_t column, int32_t offset) {
	this->line = line;
	this->column = column;
	$set(this, lsid, lsid);
	$set(this, esid, esid);
	this->charOffset = offset;
}

void SimpleLocator::setValues($String* lsid, $String* esid, int32_t line, int32_t column, int32_t offset) {
	this->line = line;
	this->column = column;
	$set(this, lsid, lsid);
	$set(this, esid, esid);
	this->charOffset = offset;
}

int32_t SimpleLocator::getLineNumber() {
	return this->line;
}

int32_t SimpleLocator::getColumnNumber() {
	return this->column;
}

int32_t SimpleLocator::getCharacterOffset() {
	return this->charOffset;
}

$String* SimpleLocator::getPublicId() {
	return nullptr;
}

$String* SimpleLocator::getExpandedSystemId() {
	return this->esid;
}

$String* SimpleLocator::getLiteralSystemId() {
	return this->lsid;
}

$String* SimpleLocator::getBaseSystemId() {
	return nullptr;
}

void SimpleLocator::setColumnNumber(int32_t col) {
	this->column = col;
}

void SimpleLocator::setLineNumber(int32_t line) {
	this->line = line;
}

void SimpleLocator::setCharacterOffset(int32_t offset) {
	this->charOffset = offset;
}

void SimpleLocator::setBaseSystemId($String* systemId) {
}

void SimpleLocator::setExpandedSystemId($String* systemId) {
	$set(this, esid, systemId);
}

void SimpleLocator::setLiteralSystemId($String* systemId) {
	$set(this, lsid, systemId);
}

void SimpleLocator::setPublicId($String* publicId) {
}

$String* SimpleLocator::getEncoding() {
	return nullptr;
}

$String* SimpleLocator::getXMLVersion() {
	return nullptr;
}

SimpleLocator::SimpleLocator() {
}

$Class* SimpleLocator::load$($String* name, bool initialize) {
	$loadClass(SimpleLocator, name, initialize, &_SimpleLocator_ClassInfo_, allocate$SimpleLocator);
	return class$;
}

$Class* SimpleLocator::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com