#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$2.h>

#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $ToStream$CharacterBuffer = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer;
using $ToStream$CharacterBuffer$GenericCharacters = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToStream$CharacterBuffer$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$2, this$1)},
	{"val$entityName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$2, val$entityName)},
	{}
};

$MethodInfo _ToStream$CharacterBuffer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;Ljava/lang/String;)V", nullptr, 0, $method(ToStream$CharacterBuffer$2, init$, void, $ToStream$CharacterBuffer*, $String*)},
	{"flush", "(Z)Z", nullptr, 0, $virtualMethod(ToStream$CharacterBuffer$2, flush, bool, bool), "org.xml.sax.SAXException"},
	{"toChars", "()[C", nullptr, 0, $virtualMethod(ToStream$CharacterBuffer$2, toChars, $chars*)},
	{}
};

$EnclosingMethodInfo _ToStream$CharacterBuffer$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer",
	"addEntityReference",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _ToStream$CharacterBuffer$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "CharacterBuffer", $PRIVATE},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters", "com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "GenericCharacters", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _ToStream$CharacterBuffer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$2",
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters",
	nullptr,
	_ToStream$CharacterBuffer$2_FieldInfo_,
	_ToStream$CharacterBuffer$2_MethodInfo_,
	nullptr,
	&_ToStream$CharacterBuffer$2_EnclosingMethodInfo_,
	_ToStream$CharacterBuffer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToStream"
};

$Object* allocate$ToStream$CharacterBuffer$2($Class* clazz) {
	return $of($alloc(ToStream$CharacterBuffer$2));
}

void ToStream$CharacterBuffer$2::init$($ToStream$CharacterBuffer* this$1, $String* val$entityName) {
	$set(this, this$1, this$1);
	$set(this, val$entityName, val$entityName);
	$ToStream$CharacterBuffer$GenericCharacters::init$(this$1);
}

bool ToStream$CharacterBuffer$2::flush(bool skipBeginningNewlines) {
	if ($nc($nc(this->this$1->this$0)->m_elemContext)->m_startTagOpen) {
		$nc(this->this$1->this$0)->closeStartTag();
		$nc($nc(this->this$1->this$0)->m_elemContext)->m_startTagOpen = false;
	}
	if ($nc(this->this$1->this$0)->m_cdataTagOpen) {
		$nc(this->this$1->this$0)->closeCDATA();
	}
	$var($chars, cs, toChars());
	try {
		$nc($nc(this->this$1->this$0)->m_writer)->write(cs, 0, $nc(cs)->length);
		$nc(this->this$1->this$0)->m_isprevtext = true;
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	return false;
}

$chars* ToStream$CharacterBuffer$2::toChars() {
	return $nc(($$str({"&"_s, this->val$entityName, ";"_s})))->toCharArray();
}

ToStream$CharacterBuffer$2::ToStream$CharacterBuffer$2() {
}

$Class* ToStream$CharacterBuffer$2::load$($String* name, bool initialize) {
	$loadClass(ToStream$CharacterBuffer$2, name, initialize, &_ToStream$CharacterBuffer$2_ClassInfo_, allocate$ToStream$CharacterBuffer$2);
	return class$;
}

$Class* ToStream$CharacterBuffer$2::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com