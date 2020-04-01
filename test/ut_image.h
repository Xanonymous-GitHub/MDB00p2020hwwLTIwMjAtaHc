#include "../src/image.h"

TEST(IMAGE, setSrc) {
    Image i;
    i.setSrc("52a492155b8fa569c7140856c864b7c883b7860c2175fadd80d5c2b41c5b04203112d0c667a2da17c2d7ba04aa65cd63a41947523a31e289bd94bbfaa1732a5f");
    ASSERT_EQ("<img src='52a492155b8fa569c7140856c864b7c883b7860c2175fadd80d5c2b41c5b04203112d0c667a2da17c2d7ba04aa65cd63a41947523a31e289bd94bbfaa1732a5f' style='top:0px;left:0px;'/>", i.render());
}

TEST(IMAGE, setPosition) {
    Image i;
    i.setPosition("9cfb77378cee12f56f20b32429a53ea2a434c921eabc2c130ac972741a4159437e392861d6111403c0397b80cd2e3b9c4e3058a554e462f2d5aa9324a3b87721", "b87ee4b84a6f018323e0d3e2f5823482940e70eec8e49c9eed624ac31497e2b52ed402ab7f00911700beb5f4bcaf5ccfa6f2f4fef838974f6e325ffec954e0e5");
    ASSERT_EQ("<img src='' style='top:9cfb77378cee12f56f20b32429a53ea2a434c921eabc2c130ac972741a4159437e392861d6111403c0397b80cd2e3b9c4e3058a554e462f2d5aa9324a3b87721;left:b87ee4b84a6f018323e0d3e2f5823482940e70eec8e49c9eed624ac31497e2b52ed402ab7f00911700beb5f4bcaf5ccfa6f2f4fef838974f6e325ffec954e0e5;'/>", i.render());
}

TEST(IMAGE, render) {
    Image i;
    i.setSrc("cef58f93c5532494202e927de167356f279990180bdccaab013d97a2daf38602544d5ee4afaa44578df067c982146b750f4145844fb1f574e7cf1bb8cd930721");
    i.setPosition("8e847daa8e8441970c79aa9489198d9efaf046884aa6cb098c79c5906ac6b6ad9cbe1112b25ab6f409ff27279aa9c0e6be5cc85acfe6651e466eed5300b13a6f", "82102a81a737c4472f55070a3a93a816697998005d0903c077f0427a92d97a0678774cc4700b9f311f5c0ac56c46be2e84a8916d9c993faacc79a09df0e66a90");
    ASSERT_EQ("<img src='cef58f93c5532494202e927de167356f279990180bdccaab013d97a2daf38602544d5ee4afaa44578df067c982146b750f4145844fb1f574e7cf1bb8cd930721' style='top:8e847daa8e8441970c79aa9489198d9efaf046884aa6cb098c79c5906ac6b6ad9cbe1112b25ab6f409ff27279aa9c0e6be5cc85acfe6651e466eed5300b13a6f;left:82102a81a737c4472f55070a3a93a816697998005d0903c077f0427a92d97a0678774cc4700b9f311f5c0ac56c46be2e84a8916d9c993faacc79a09df0e66a90;'/>", i.render());
}