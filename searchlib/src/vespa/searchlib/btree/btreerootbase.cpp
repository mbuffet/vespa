// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#include "btreerootbase.h"
#include "btreerootbase.hpp"

namespace search
{

namespace btree
{

template class BTreeRootBase<uint32_t, uint32_t,
                             NoAggregated,
                             BTreeDefaultTraits::INTERNAL_SLOTS,
                             BTreeDefaultTraits::LEAF_SLOTS>;
template class BTreeRootBase<uint32_t, BTreeNoLeafData,
                             NoAggregated,
                             BTreeDefaultTraits::INTERNAL_SLOTS,
                             BTreeDefaultTraits::LEAF_SLOTS>;
template class BTreeRootBase<uint32_t, int32_t,
                             MinMaxAggregated,
                             BTreeDefaultTraits::INTERNAL_SLOTS,
                             BTreeDefaultTraits::LEAF_SLOTS>;

} // namespace btree
} // namespace search
