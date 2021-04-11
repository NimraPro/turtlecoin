// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

  /*  const std::initializer_list<CheckpointData> CHECKPOINTS = {
		{2800000, "eaa9bf3a6ae0baf845f88379c1de5e8debb4d4e2202097375081aa00c89f8465"},
		{2805000, "4933023bf3f6a840f469288f19ab636cd160d0c63740f02869f2c746aa1a9021"},
		{2810000, "e35c467e1f3ecb614a6dfd2bc0c515ef1dab3e75d471a73bd74d955423650466"},
		{2815000, "3566903e3e8061db02efd478e85f5f98ccc4091f3e842cf8f92fba5b3752aa13"},
		{2820000, "834f7b04affed29b1612e1d79954e9c16b5bdd7e3915d714e4e321c9dbdc59c2"},
		{2825000, "0e0cfc6b8c3a899d79584ca1a03e5a91f6bba8bcdbbb892864a05e7f1b9ec726"},
		{2830000, "7f20df54ee8068355d89ba74086a5a15c2641d4f3cc69ffacd4ef38f0ca3a780"},
		{2835000, "09729700ade0de217ca2225d10a330d23a07d58d93222f532984bd898aea58a5"},
		{2840000, "e0bedbf07192cc9f94c8b294ead22e9578ca9f833a97613f19f6cf4c04a4ee72"},
		{2845000, "2cfe18760abe0004e1bdf181201c5c1c91967d5a447d79d916e4cabe3eba7789"},
		{2850000, "18ab2cde5d27e0e818f1e5aa0ee6c237ea3035c76181baabef908288681d42c8"},
		{2855000, "c4ccefc068231177bc12f0aeec1757051311737163d2267a9cb07c037b8daf5c"},
		{2860000, "bd5d6ad89382023b46091198dc8c198c99b0796ab70a9f09ba7f96d1da722718"},
		{2865000, "4ff1d5844c747c56b5d81ab1b7af48abd936ad63d9ae2c6fd546e7011bbf774e"},
		{2870000, "40331e2e235b32caeb8480e40fd8eca620eaf95d4c673224e5e58790069f9b0c"},
		{2875000, "65083867efcaf3f2a3e38dc86bc0ad855989c7b896945a76f415f358608fadfa"},
		{2880000, "fcff2a5223b991ace20984d758893082e05a45cbde8121fdd94192dd04aa1028"},
		{2885000, "03f98fbafa356b70ad89a35f3dbe3a2ba796308a6d53fe3b14e64c44e8251610"},
		{2890000, "3e9af11a42d5256bc6214548fcdedf914cd00befd7f2b8a39455d9780abf9eda"},
		{2895000, "27ea0dbf4f2fdd51693ea168ad2bc2dc96d81c6f95d4ed65d83e8be3754bbdd4"},
		{2900000, "98547f065930bfbb2e054859227bce9bd5bf83ab98c8a1885e3e356da32c1f15"},
		{2905000, "dd72bcab10da91d32e41d3ceda966c8c82432859b2bf1d7e92c2a1cc8b5b5750"},
		{2910000, "1270e07da488302a988d5dfd1881276fdc8588c7413bef52da8284c2a049605e"},
		{2915000, "63f7d9473256b30afb9b526f2e0f4ddbe69a2997cb098c3d54e1195e682011e5"},
		{2920000, "574e22098ff7924d2ce69d00852d047324e61ead153f0008de6e0d197239149b"},
		{2925000, "05aa5703f00913af3b2a2e642789a083ee5c122d70c55f5656f90957175c272d"},
		{2930000, "3e60e2501f1772c7a1c341ae54ab88472add1685753c29b98ac202a6bd950695"},
		{2935000, "121642cb6d3e400ab86dada3fcbbdbbe0aa9c03c567327618f6e67850cebd5c5"},
		{2940000, "6192d845e63f63aea5477d386b987e8395e760a6ccf58607a261c0dd966199b5"},
		{2945000, "436857db035abce6212b5726324213f675dcf2f3a7bebd5195a4affb61947612"},
		{2950000, "de945e2147415a26cf664b2f316c5a4c436f7e8f7c2c2072c79129355e047238"},
		{2955000, "5b3b6fbf1fbf3b01419a6d55e12a19681605e245112bca46c41b77ac00256b59"}};
		*/
} // namespace CryptoNote
