#include <Test4165217.h>
#include <java/awt/Color.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/util/Random.h>
#include <javax/swing/JColorChooser.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;
using $JColorChooser = ::javax::swing::JColorChooser;

void Test4165217::init$() {
}

void Test4165217::main($StringArray* args) {
	$useLocalObjectStack();
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setColor($$new($Color, $$new($Random)->nextInt()));
	$var($Color, before, chooser->getColor());
	$var($Color, after, $$nc(copy(chooser))->getColor());
	if (!$nc(after)->equals(before)) {
		$throwNew($Error, "color is changed after serialization"_s);
	}
}

$JColorChooser* Test4165217::copy($JColorChooser* chooser) {
	try {
		return $cast($JColorChooser, deserialize($(serialize(chooser))));
	} catch ($ClassNotFoundException& exception) {
		$throwNew($Error, "unexpected exception during class creation"_s, exception);
	} catch ($IOException& exception) {
		$throwNew($Error, "unexpected exception during serialization"_s, exception);
	}
	$shouldNotReachHere();
}

$bytes* Test4165217::serialize(Object$* object) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	oos->writeObject(object);
	oos->flush();
	return baos->toByteArray();
}

$Object* Test4165217::deserialize($bytes* array) {
	$useLocalObjectStack();
	$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, array));
	$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
	return ois->readObject();
}

Test4165217::Test4165217() {
}

$Class* Test4165217::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4165217, init$, void)},
		{"copy", "(Ljavax/swing/JColorChooser;)Ljavax/swing/JColorChooser;", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4165217, copy, $JColorChooser*, $JColorChooser*)},
		{"deserialize", "([B)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4165217, deserialize, $Object*, $bytes*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4165217, main, void, $StringArray*)},
		{"serialize", "(Ljava/lang/Object;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4165217, serialize, $bytes*, Object$*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4165217",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4165217, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4165217);
	});
	return class$;
}

$Class* Test4165217::class$ = nullptr;