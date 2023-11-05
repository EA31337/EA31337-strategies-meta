//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                                 Copyright 2016-2023, EA31337 Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

/*
 *  This file is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ENUM_STRATEGY_META_DEFINED
// Defines enum with supported meta strategy list.
enum ENUM_STRATEGY_META {
  STRAT_META_NONE = 0,        // (None)
  STRAT_META_BEARS_BULLS,     // (Meta) Bears & Bulls
  STRAT_META_DISCREPANCY,     // (Meta) Discrepancy
  STRAT_META_DOUBLE,          // (Meta) Double
  STRAT_META_CONDITIONS,      // (Meta) Conditions
  STRAT_META_ENHANCE,         // (Meta) Enhance
  STRAT_META_EQUITY,          // (Meta) Equity
  STRAT_META_FORMATION,       // (Meta) Formation
  STRAT_META_INTERVAL,        // (Meta) Interval
  STRAT_META_HEDGE,           // (Meta) Hedge
  STRAT_META_LIMIT,           // (Meta) Limit
  STRAT_META_MA_CROSS,        // (Meta) MA Cross
  STRAT_META_MARGIN,          // (Meta) Margin
  STRAT_META_MARTINGALE,      // (Meta) Martingale
  STRAT_META_MIRROR,          // (Meta) Mirror
  STRAT_META_MULTI,           // (Meta) Multi
  STRAT_META_MULTI_CURRENCY,  // (Meta) Multi Currency
#ifdef __MQL5__
  // Supported for MQL5 only.
  STRAT_META_NEWS,  // (Meta) News
#endif
  STRAT_META_ORDER_LIMIT,        // (Meta) Order Limit
  STRAT_META_OSCILLATOR_FILTER,  // (Meta) Oscillator Filter
  STRAT_META_OSCILLATOR_SWITCH,  // (Meta) Oscillator Switch
  STRAT_META_PATTERN,            // (Meta) Pattern
  STRAT_META_PIVOT,              // (Meta) Pivot
  STRAT_META_PROFIT,             // (Meta) Profit
  STRAT_META_RESISTANCE,         // (Meta) Resistance
  STRAT_META_REVERSAL,           // (Meta) Reversal
  STRAT_META_RISK,               // (Meta) Risk
  STRAT_META_RSI,                // (Meta) RSI
  STRAT_META_SCALPER,            // (Meta) Scalper
  STRAT_META_SIGNAL_FILTER,      // (Meta) Signal Filter
  STRAT_META_SIGNAL_SWITCH,      // (Meta) Signal Switch
  STRAT_META_SPREAD,             // (Meta) Spread
  STRAT_META_TIMEZONE,           // (Meta) Timezone
  STRAT_META_TREND,              // (Meta) Trend
  STRAT_META_TRIO,               // (Meta) Trio
  STRAT_META_VOLATILITY,         // (Meta) Volatility
  STRAT_META_WEEKDAY,            // (Meta) Weekday
};
#define ENUM_STRATEGY_META_DEFINED
#endif
