#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>

#include <jcpp.h>

#undef EMPTY_STRING
#undef PREFIX_XML
#undef PREFIX_XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLSymbols_FieldInfo_[] = {
	{"EMPTY_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, EMPTY_STRING)},
	{"PREFIX_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, PREFIX_XML)},
	{"PREFIX_XMLNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, PREFIX_XMLNS)},
	{"fANYSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fANYSymbol)},
	{"fCDATASymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fCDATASymbol)},
	{"fIDSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fIDSymbol)},
	{"fIDREFSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fIDREFSymbol)},
	{"fIDREFSSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fIDREFSSymbol)},
	{"fENTITYSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fENTITYSymbol)},
	{"fENTITIESSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fENTITIESSymbol)},
	{"fNMTOKENSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fNMTOKENSymbol)},
	{"fNMTOKENSSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fNMTOKENSSymbol)},
	{"fNOTATIONSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fNOTATIONSymbol)},
	{"fENUMERATIONSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fENUMERATIONSymbol)},
	{"fIMPLIEDSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fIMPLIEDSymbol)},
	{"fREQUIREDSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fREQUIREDSymbol)},
	{"fFIXEDSymbol", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSymbols, fFIXEDSymbol)},
	{}
};

$MethodInfo _XMLSymbols_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSymbols, init$, void)},
	{}
};

$ClassInfo _XMLSymbols_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLSymbols",
	"java.lang.Object",
	nullptr,
	_XMLSymbols_FieldInfo_,
	_XMLSymbols_MethodInfo_
};

$Object* allocate$XMLSymbols($Class* clazz) {
	return $of($alloc(XMLSymbols));
}

$String* XMLSymbols::EMPTY_STRING = nullptr;
$String* XMLSymbols::PREFIX_XML = nullptr;
$String* XMLSymbols::PREFIX_XMLNS = nullptr;
$String* XMLSymbols::fANYSymbol = nullptr;
$String* XMLSymbols::fCDATASymbol = nullptr;
$String* XMLSymbols::fIDSymbol = nullptr;
$String* XMLSymbols::fIDREFSymbol = nullptr;
$String* XMLSymbols::fIDREFSSymbol = nullptr;
$String* XMLSymbols::fENTITYSymbol = nullptr;
$String* XMLSymbols::fENTITIESSymbol = nullptr;
$String* XMLSymbols::fNMTOKENSymbol = nullptr;
$String* XMLSymbols::fNMTOKENSSymbol = nullptr;
$String* XMLSymbols::fNOTATIONSymbol = nullptr;
$String* XMLSymbols::fENUMERATIONSymbol = nullptr;
$String* XMLSymbols::fIMPLIEDSymbol = nullptr;
$String* XMLSymbols::fREQUIREDSymbol = nullptr;
$String* XMLSymbols::fFIXEDSymbol = nullptr;

void XMLSymbols::init$() {
}

void clinit$XMLSymbols($Class* class$) {
	$assignStatic(XMLSymbols::EMPTY_STRING, ""_s->intern());
	$assignStatic(XMLSymbols::PREFIX_XML, "xml"_s->intern());
	$assignStatic(XMLSymbols::PREFIX_XMLNS, "xmlns"_s->intern());
	$assignStatic(XMLSymbols::fANYSymbol, "ANY"_s->intern());
	$assignStatic(XMLSymbols::fCDATASymbol, "CDATA"_s->intern());
	$assignStatic(XMLSymbols::fIDSymbol, "ID"_s->intern());
	$assignStatic(XMLSymbols::fIDREFSymbol, "IDREF"_s->intern());
	$assignStatic(XMLSymbols::fIDREFSSymbol, "IDREFS"_s->intern());
	$assignStatic(XMLSymbols::fENTITYSymbol, "ENTITY"_s->intern());
	$assignStatic(XMLSymbols::fENTITIESSymbol, "ENTITIES"_s->intern());
	$assignStatic(XMLSymbols::fNMTOKENSymbol, "NMTOKEN"_s->intern());
	$assignStatic(XMLSymbols::fNMTOKENSSymbol, "NMTOKENS"_s->intern());
	$assignStatic(XMLSymbols::fNOTATIONSymbol, "NOTATION"_s->intern());
	$assignStatic(XMLSymbols::fENUMERATIONSymbol, "ENUMERATION"_s->intern());
	$assignStatic(XMLSymbols::fIMPLIEDSymbol, "#IMPLIED"_s->intern());
	$assignStatic(XMLSymbols::fREQUIREDSymbol, "#REQUIRED"_s->intern());
	$assignStatic(XMLSymbols::fFIXEDSymbol, "#FIXED"_s->intern());
}

XMLSymbols::XMLSymbols() {
}

$Class* XMLSymbols::load$($String* name, bool initialize) {
	$loadClass(XMLSymbols, name, initialize, &_XMLSymbols_ClassInfo_, clinit$XMLSymbols, allocate$XMLSymbols);
	return class$;
}

$Class* XMLSymbols::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com