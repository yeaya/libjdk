#include <java/sql/SQLXML.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

#undef SQLXML

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;

namespace java {
	namespace sql {

$MethodInfo _SQLXML_MethodInfo_[] = {
	{"free", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBinaryStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSource", "(Ljava/lang/Class;)Ljavax/xml/transform/Source;", "<T::Ljavax/xml/transform/Source;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setResult", "(Ljava/lang/Class;)Ljavax/xml/transform/Result;", "<T::Ljavax/xml/transform/Result;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _SQLXML_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.SQLXML",
	nullptr,
	nullptr,
	nullptr,
	_SQLXML_MethodInfo_
};

$Object* allocate$SQLXML($Class* clazz) {
	return $of($alloc(SQLXML));
}

$Class* SQLXML::load$($String* name, bool initialize) {
	$loadClass(SQLXML, name, initialize, &_SQLXML_ClassInfo_, allocate$SQLXML);
	return class$;
}

$Class* SQLXML::class$ = nullptr;

	} // sql
} // java